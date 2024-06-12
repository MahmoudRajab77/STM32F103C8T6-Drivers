/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 10 Nov 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef UART_BOOTLOADER_CONFIG_H
#define UART_BOOTLOADER_CONFIG_H

/*
*********************************************************************************************************
*                                        CONFIGURABLE PARAMETERS
*********************************************************************************************************
*/
#define UARTBOOTLOADER_ApplicationStartAddress		(0x08001004)		//THE ADDRESS OF THE RESET VECTOR 
#define UARTBOOTLOADER_MAXIMUMTIMEOUT				(5000000UL)			//TIMEOUT AFTER 5 SECONDS



#endif