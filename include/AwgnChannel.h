/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	AWGN Channel
	----------------------------------------------------------------------------

	29/12/2022
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define SIZE_MODULATED_FRAME 576


typedef  float   BIT;

typedef struct AWGN_MFRAME
{
	BIT bits[SIZE_MODULATED_FRAME];		// Static table containing bits 
} AWGN_MODULATED_FRAME;

void AwgnChannel_Init(AWGN_MODULATED_FRAME*);

void AwgnChannel_Runnable(void);