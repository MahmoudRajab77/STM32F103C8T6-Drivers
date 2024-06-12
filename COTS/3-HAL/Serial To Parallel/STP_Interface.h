/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 10 Oct 2021										  */
/* Version	: V01												  */
/******************************************************************/


#ifndef STP_INTERFACE_H
#define STP_INTERFACE_H


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void HSTP_voidInit 			  (void);
void HSTP_voidSendSynchronous (const u8* Copy_pu8SerialData, const u8 Copy_u8NumberofRegisters);



#endif