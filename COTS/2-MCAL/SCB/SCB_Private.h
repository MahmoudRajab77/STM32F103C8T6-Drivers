/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 9 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef SCB_PRIVATE_H
#define SCB_PRIVATE_H


/*
*********************************************************************************************************
*                                          	GLOBAL VARIABLES
*********************************************************************************************************
*/
volatile u8 Global_u8Interrupt_SW_Grouping = 0;



/*
*********************************************************************************************************
*                                           TYPE DEFINITIONS
*********************************************************************************************************
*/
/*	STRUCTURE TO HOLD SCB REGISTERS	*/
typedef struct
{
	volatile u32 CPUID;
	volatile u32 ICSR;
	volatile u32 VTOR;
	volatile u32 AIRCR;
	volatile u32 SCR;
	volatile u32 CCR;
	volatile u32 SHPR1;
	volatile u32 SHPR2;
	volatile u32 SHPR3;
	volatile u32 SHCRS;
	volatile u32 CFSR;
	volatile u32 HFSR;
	volatile u32 MMAR;
	volatile u32 BFAR;
} SCB_TypeDef;


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
/*	POINTER TO THE TYPE SCB_TypeDef	*/
#define SCB 			((volatile SCB_TypeDef*)(0xE000ED00))



#endif