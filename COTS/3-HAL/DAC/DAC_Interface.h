/******************************************************************/
/* Author	: Mahmoud Rajab										  */
/* Date		: 6 Oct 2021										  */
/* Version	: V01												  */
/******************************************************************/



#ifndef DAC_INTERFACE_H
#define DAC_INTERFACE_H

/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void HDAC_voidInit (void);
u8 HDAC_voidPlay_Audiofile (const u8* const Value_u8Sample, const u16 Copy_u16FileLength, const u16 Copy_u16SampleRate);



#endif