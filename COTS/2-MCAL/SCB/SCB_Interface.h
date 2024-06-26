/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 9 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef SCB_INTERFACE_H
#define SCB_INTERFACE_H


/*
*********************************************************************************************************
*                                           	MACROS
*********************************************************************************************************
*/
//INTERRUPTS' S/W PRIORITY GROUPS 
#define	SCB_SW_PRI_GP16_SP0				((u32)(0x05FA0300))
#define	SCB_SW_PRI_GP8_SP2				((u32)(0x05FA0400))
#define	SCB_SW_PRI_GP4_SP4				((u32)(0x05FA0500))
#define	SCB_SW_PRI_GP2_SP8				((u32)(0x05FA0600))
#define	SCB_SW_PRI_GP0_SP16				((u32)(0x05FA0700))


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void MSCB_voidSet_VectorTableBaseOffset		  (void);
void MSCB_voidSet_SWInterruptPriorityGrouping (u32 Copy_u32Interrupt_SW_Grouping);



#endif