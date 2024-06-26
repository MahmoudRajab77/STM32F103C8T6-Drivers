/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 9 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_Interface.h"

#include "7_SEGMENT_Interface.h"
#include "7_SEGMENT_Private.h"
#include "7_SEGMENT_Config.h"


/*
*********************************************************************************************************
*                                           FUNCTION DEFINITIONS
*********************************************************************************************************
*/
void HSEVENSEGMENT_voidInit(u8 Copy_u8Port, const u8* const value_u8Pins)
{
	for(u8 i=0; i<7; i++)
	{
		GPIO_voidSetPinMode (Copy_u8Port, value_u8Pins[i], OUTPUT_GP_PP_2MHZ);
	}
}
//***************************************************************************************************************
void HSEVENSEGMENT_voidDisplay(u8 Copy_u8Port, const u8* const value_u8Pins, u8 Copy_u8Type, u8 Copy_u8Number)
{
	if(Copy_u8Type==SEVENSEGMENT_CC)
	{
		for(u8 i=0; i<7; i++)
		{
			GPIO_voidSetPinValue (Copy_u8Port, value_u8Pins[i], (G_SevenSegment[Copy_u8Number][i]) );
		}
	}		
	else
	{
		if(Copy_u8Type==SEVENSEGMENT_CA)
		{
			for(u8 i=0; i<7; i++)
			{
				GPIO_voidSetPinValue (Copy_u8Port, value_u8Pins[i], !(G_SevenSegment[Copy_u8Number][i]) );
			}
		}
	}	
}