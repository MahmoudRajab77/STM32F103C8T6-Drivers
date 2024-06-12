/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 25 Sep 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef IR_NEC_PRIVATE_H
#define IR_NEC_PRIVATE_H

/*
*********************************************************************************************************
*                                       		MACROS
*********************************************************************************************************
*/
#define	IR_NEC_MAXIMUMBUTTONSPRESSED			(100)
#define	IR_NEC_MAXIMUMFRAME						(50)
#define	IR_NEC_BEGINNINGOFDATA					(17)

#define	IR_NEC_LOGICALZERO_WIDTH				(1000UL)
#define	IR_NEC_LOGICALONE_WIDTH					(2000UL)

#define	IR_NEC_MAXIMUM_PERIOD					(15000UL)
#define	IR_NEC_BUTTON_WAIT						(250000UL)


/*
*********************************************************************************************************
*                                       PRIVATE GLOBAL VARIABLES
*********************************************************************************************************
*/
static volatile u8 ButtonsIndex    								 =   0;
static volatile u8 ReceivedData						        	 =   0;
static volatile u16 Periods       [IR_NEC_MAXIMUMFRAME]	         = { 0 };
static volatile u8 ButtonsPressed [IR_NEC_MAXIMUMBUTTONSPRESSED] = { 0 };


/*
*********************************************************************************************************
*                                      	PRIVATE FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void ReceiveBit (void);
void DecodeReceivedFrame (void);

#endif