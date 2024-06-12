/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 9 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "AFIO_Interface.h"
#include "AFIO_Private.h"
#include "AFIO_Config.h"


/*
*********************************************************************************************************
*                                           FUNCTION DEFINITIONS
*********************************************************************************************************
*/
void MAFIO_voidSetEXTILine (u8 copy_u8EXTILine, u8 copy_u8GPIO_EXTISource)
{
	if(copy_u8EXTILine < 16)
	{
		u8 Local_u8Index = copy_u8EXTILine / 4;
		u8 Local_u8Position = 4 * (copy_u8EXTILine % 4) ;
		
		AFIO->EXTICR[Local_u8Index] |= 	(copy_u8GPIO_EXTISource << Local_u8Position);	
	}
	else
	{
		//error
	}
}