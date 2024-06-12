/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 6 Oct 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
/*	UART_1 API'S	*/
void MUART1_Init 		  (void);
void MUART1_TransmitChar  (u8  Copy_u8Data);
void MUART1_TransmitString(u8 *Copy_pu8Str);
u8   MUART1_ReceiveChar   (void);
u8   MUART1_ReadData   	  (void);
void MUART1_SetCallback   (void (*Copy_ptr)(void));

/*	UART_2 API'S	*/
void MUART2_Init 		  (void);
void MUART2_TransmitChar  (u8  Copy_u8Data);
void MUART2_TransmitString(u8 *Copy_pu8Str);
u8   MUART2_ReceiveChar   (void);
u8   MUART2_ReadData   	  (void);
void MUART2_SetCallback   (void (*Copy_ptr)(void));

/*	UART_3 API'S	*/
void MUART3_Init 		  (void);
void MUART3_TransmitChar  (u8  Copy_u8Data);
void MUART3_TransmitString(u8 *Copy_pu8Str);
u8   MUART3_ReceiveChar   (void);
u8   MUART3_ReadData   	  (void);
void MUART3_SetCallback   (void (*Copy_ptr)(void));


#endif