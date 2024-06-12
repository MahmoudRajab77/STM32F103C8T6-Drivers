/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 9 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef 7_SEGMENT_INTERFACE_H
#define 7_SEGMENT_INTERFACE_H


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
/* Seven Segment Types */
#define		SEVENSEGMENT_CC					((u8)(0))
#define		SEVENSEGMENT_CA					((u8)(1))

/* Seven Segment Numbers */
#define		SEVENSEGMENT_NUMBER0			((u8)(0))
#define		SEVENSEGMENT_NUMBER1			((u8)(1))
#define		SEVENSEGMENT_NUMBER2			((u8)(2))
#define		SEVENSEGMENT_NUMBER3			((u8)(3))
#define		SEVENSEGMENT_NUMBER4			((u8)(4))
#define		SEVENSEGMENT_NUMBER5			((u8)(5))
#define		SEVENSEGMENT_NUMBER6			((u8)(6))
#define		SEVENSEGMENT_NUMBER7			((u8)(7))
#define		SEVENSEGMENT_NUMBER8			((u8)(8))
#define		SEVENSEGMENT_NUMBER9			((u8)(9))


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void HSEVENSEGMENT_voidInit(u8 Copy_u8Port, const u8* const value_u8Pins);
void HSEVENSEGMENT_voidDisplay(u8 Copy_u8Port, const u8* const value_u8Pins, u8 Copy_u8Type, u8 Copy_u8Number);



#endif