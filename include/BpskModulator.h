/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	BPSK Mod.       
	----------------------------------------------------------------------------

	08/06/2021	
*/

#include<stdio.h>


#define SIZE_MODULATED_FRAME 576

typedef  float   BIT;

typedef struct MFRAME
{
	BIT bits[SIZE_MODULATED_FRAME];		// Static table containing bits 
} MODULATED_FRAME;


void BpskModulator_Init(MODULATED_FRAME *);

void BpskModulator_Runnable(void);