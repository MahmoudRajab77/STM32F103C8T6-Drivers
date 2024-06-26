/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 9 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/


#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
/* LED Polarities */
#define		LED_ACTIVE_LOW					((u8)(0))
#define		LED_ACTIVE_HIGH					((u8)(1))


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void HLED_voidInit(u8 Copy_u8Port, u8 Copy_u8Pin);
void HLED_voidTurnON(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Polarity);
void HLED_voidTurnOFF(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Polarity);
void HLED_voidToggle(u8 Copy_u8Port, u8 Copy_u8Pin);

#endif