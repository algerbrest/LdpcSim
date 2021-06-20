/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Encoder       
	----------------------------------------------------------------------------

	06/06/2021	
*/

#include<stdio.h>
#include<string.h>

#define SIZE_CODED_FRAME 576

typedef  float   BIT;

typedef struct CFRAME 
{
	BIT bits[SIZE_CODED_FRAME];		// Static table containing bits 
} CODED_FRAME;

void LdpcEncoder_Init(CODED_FRAME *);

void LdpcEncoder_Runnable(void);
