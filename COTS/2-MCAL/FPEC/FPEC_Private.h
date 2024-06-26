/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 2 Nov 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef FPEC_PRIVATE_H
#define FPEC_PRIVATE_H


/*
*********************************************************************************************************
*                                           TYPE DEFINITIONS
*********************************************************************************************************
*/
/*	STRUCTURE TO HOLD FPEC REGISTERS	*/
typedef struct
{
	volatile u32 ACR;
	volatile u32 KEYR;
	volatile u32 OPTKEYR;
	volatile u32 SR;
	volatile u32 CR;
	volatile u32 AR;
	volatile u32 RESERVED;
	volatile u32 OBR;
	volatile u32 WRPR;
} FPEC_TypeDef;


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
/*	POINTER TO THE TYPE FPEC_TypeDef	*/
#define FPEC 	((volatile FPEC_TypeDef*)(0x40022000))

/*	Key Values	*/
#define RDPRT 	(0x00A5)
#define KEY1 	(0x45670123)
#define KEY2 	(0xCDEF89AB)



#endif