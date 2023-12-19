/* FILENAME: UART_interface  
*  Author:  osama
*  Version:  V1.0
*  DATE:   2021-02-20
*/
#ifndef _UART_interface_H
#define _UART_interface_H

void UART_VidInit(void);

void UART_VidTransmit(u8* arr);

u8 UART_U8Receive(void);

void MUART_voidTransmitChar(u8 Copy_u8Char);


#endif //_UART_interface_H
