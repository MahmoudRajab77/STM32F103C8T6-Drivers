


#ifndef 	RCC_INTERFACE_H
#define 	RCC_INTERFACE_H
#include "STD_TYPE.h"
void RCC_VidInit(void);
void RCC_VidEnableClock(u8 Copy_U8BusID , u8 Copy_U8PeripheralID);
void RCC_VidDisableClock(u8 Copy_U8BusID , u8 Copy_U8PeripheralID);


#define 	RCC_AHB		0
#define 	RCC_APB1	1
#define 	RCC_APB2	2

#define 	RCC_HSE		0
#define 	RCC_HSE_2	1
#define 	RCC_HSI_2	2


#endif
