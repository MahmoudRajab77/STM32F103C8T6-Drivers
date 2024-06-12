/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 6 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_Interface.h"
#include "NVIC_Private.h"
#include "NVIC_Config.h"


/*
*********************************************************************************************************
*                                           FUNCTION DEFINITIONS
*********************************************************************************************************
*/
void MNVIC_voidEnableInterrupt (u8 Copy_u8InterruptNumber)
{
	if(Copy_u8InterruptNumber < 32)
	{
		NVIC_ISER0 = (1<<Copy_u8InterruptNumber);
	}
	else
	{
		if(Copy_u8InterruptNumber < 60)
		{
			NVIC_ISER1 = (1<<(Copy_u8InterruptNumber%32));
		}
		else 
		{
			/* Return Error */
		}
	}
}
//***************************************************************************************************************
void MNVIC_voidDisableInterrupt (u8 Copy_u8InterruptNumber)
{
	if(Copy_u8InterruptNumber < 32)
	{
		NVIC_ICER0 = (1<<Copy_u8InterruptNumber);
	}
	else
	{
		if(Copy_u8InterruptNumber < 60)
		{
			NVIC_ICER1 = (1<<(Copy_u8InterruptNumber%32));
		}
		else 
		{
			/* Return Error */
		}
	}
}
//***************************************************************************************************************
void MNVIC_voidSetPendingFlag (u8 Copy_u8InterruptNumber)
{
	if(Copy_u8InterruptNumber < 32)
	{
		NVIC_ISPR0 = (1<<Copy_u8InterruptNumber);
	}
	else
	{
		if(Copy_u8InterruptNumber < 60)
		{
			NVIC_ISPR1 = (1<<(Copy_u8InterruptNumber%32));
		}
		else 
		{
			/* Return Error */
		}
	}
}
//***************************************************************************************************************
void MNVIC_voidClearPendingFlag (u8 Copy_u8InterruptNumber)
{
	if(Copy_u8InterruptNumber < 32)
	{
		NVIC_ICPR0 = (1<<Copy_u8InterruptNumber);
	}
	else
	{
		if(Copy_u8InterruptNumber < 60)
		{
			NVIC_ICPR1 = (1<<(Copy_u8InterruptNumber%32));
		}
		else 
		{
			/* Return Error */
		}
	}
}
//***************************************************************************************************************
u8 MNVIC_u8GetActiveFlag (u8 Copy_u8InterruptNumber)
{
	u8 Local_u8Result = 0;
	
	if(Copy_u8InterruptNumber < 32)
	{
		Local_u8Result = GET_BIT(NVIC_IABR0,Copy_u8InterruptNumber);
	}
	else
	{
		if(Copy_u8InterruptNumber < 60)
		{
			Local_u8Result = GET_BIT(NVIC_IABR1,(Copy_u8InterruptNumber%32));
		}
		else 
		{
			/* Return Error */
		}
	}
	
	return Local_u8Result;
}
//***************************************************************************************************************
void MNVIC_voidSetInterruptPriority (u8 Copy_u8InterruptNumber, u8 Copy_u8GroupPriority, u8 Copy_u8SubPriority)
{
	if (Copy_u8InterruptNumber<60)
	{	
		NVIC_IPR[Copy_u8InterruptNumber]  =  ((Copy_u8SubPriority&((1<<(Global_u8Interrupt_SW_Grouping-3))-1))<<4);
		NVIC_IPR[Copy_u8InterruptNumber] |=  (Copy_u8GroupPriority<<(Global_u8Interrupt_SW_Grouping + 1));	
	}
	else
	{
		/* Return Error */
	}
}