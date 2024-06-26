/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 2 Nov 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef FPEC_INTERFACE_H
#define FPEC_INTERFACE_H


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
//INTERRUPTS' S/W PRIORITY GROUPS 



/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void FPEC_voidUnlockFPEC	(void);
void FPEC_voidEraseAppArea	(void);
void FPEC_voidFlashPageErase(u8 Copy_u8PageNumber);
void FPEC_voidFlashWrite	(u32 Copy_u32Address, volatile u16* Copy_u16Data, u8 Copy_u8Length);



#endif