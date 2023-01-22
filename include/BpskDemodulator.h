/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	BPSK Demod.
	----------------------------------------------------------------------------

	22/01/2023
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define SIZE_DEMODULATED_FRAME 576


typedef  float   BIT;

typedef struct DMFRAME
{
	BIT bits[SIZE_DEMODULATED_FRAME];		// Static table containing bits 
} DEMODULATED_FRAME;


void BpskDemodulator_Init(DEMODULATED_FRAME*);

void BpskDemodulator_Runnable(void);