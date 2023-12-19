/* FILENAME: UART_private  
*  Author:  osama
*  Version:  V1.0
*  DATE:   2021-02-20
*/
#ifndef _UART_private_H
#define _UART_private_H

typedef struct{
	volatile u32 SR;
	volatile u32 DR;
	volatile u32 BRR;
	volatile u32 CR1;
	volatile u32 CR2;
	volatile u32 CR3;
	volatile u32 GTPR;
}UART_st;


#define UART_BASE_ADDRESS	0x40013800

#define UART_1	((volatile UART_st*)UART_BASE_ADDRESS)




#endif //_UART_private_H
