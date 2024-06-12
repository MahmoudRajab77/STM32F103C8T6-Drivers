/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 25 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/




#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_Interface.h"
#include "AFIO_Interface.h"
#include "EXTI_Interface.h"
#include "NVIC_Interface.h"
#include "SysTick_Interface.h"

#include "IR_NEC_Interface.h"
#include "IR_NEC_Private.h"
#include "IR_NEC_Config.h"


/*
*********************************************************************************************************
*                                           FUNCTION DEFINITIONS
*********************************************************************************************************
*/
void HIR_NEC_voidInit (void)
{
	MGPIO_voidSetPinMode  (IR_NEC_RECEIVER_OUTPUT_PIN, INPUT_FLOATING);

	MAFIO_voidSetEXTILine (IR_NEC_RECEIVER_AFIO_EXTI_LINE);

	MEXTI_voidSetCallback (IR_NEC_RECEIVER_EXTI_LINE, ReceiveBit);
	MEXTI_voidInit();
	MEXTI_voidEnable_EXTI_Line(IR_NEC_RECEIVER_EXTI_LINE);
	
	MNVIC_voidEnableInterrupt (IR_NEC_RECEIVER_NVIC_IRQ_EXTI);

	MSysTick_voidInit();
}
//***************************************************************************************************************
u8 HIR_NEC_u8ReadReceivedFrame (void)
{
	u8 Local_u8ReceivedFrame = ButtonsPressed[0];
	
	if(Local_u8ReceivedFrame)
	{
		for(u8 i = 0; i<ButtonsIndex; i++)
		{
			ButtonsPressed[i] = ButtonsPressed[i+1];
		}

		ButtonsIndex--;
	}

	return Local_u8ReceivedFrame ;
}
//***************************************************************************************************************
void ReceiveBit (void)
{
	/* Initialize variable that holds the Position	*/
	static volatile u8 Position = 0;

	/* Check there's no Unread Data */
	if(!ReceivedData)
	{
		Periods[Position] = MSysTick_u32GetElapsedTime() ;

		/*	Detect the start of Frame  */
		if(Periods[Position]/13000)
		{
			Periods[0] = Periods[Position];
			Position   = 0;
		}

		Position++;
		MSysTick_voidSetIntervalSingle(IR_NEC_MAXIMUM_PERIOD, DecodeReceivedFrame);
	}
	else
	{
		/* Reset Position */
		Position = 0;
	}
}
//***************************************************************************************************************
void DecodeReceivedFrame (void)
{
	static volatile u8 ButtonWait =  0;

	if(ButtonWait)
	{
		for(u8 i=IR_NEC_BEGINNINGOFDATA ; i<(IR_NEC_BEGINNINGOFDATA+8) ; i++)
		{
			if(Periods[i]/IR_NEC_LOGICALONE_WIDTH)
			{
				SET_BIT(ReceivedData, (i-IR_NEC_BEGINNINGOFDATA) );
			}
		}

		ButtonsPressed [ButtonsIndex++] = ReceivedData;
		ReceivedData = 0;
		ButtonWait   = 0;
	}
	else
	{
		MSysTick_voidSetIntervalSingle(IR_NEC_BUTTON_WAIT, DecodeReceivedFrame);
		ButtonWait = 1;
	}
}