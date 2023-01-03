/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	BPSK Mod.       
	----------------------------------------------------------------------------

	19/12/2022	
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define SIZE_MODULATED_FRAME 576
#define SIZE_CODED_FRAME 576

typedef  float   BIT;

typedef struct MFRAME
{
	BIT bits[SIZE_MODULATED_FRAME];		// Static table containing bits 
} MODULATED_FRAME;

typedef struct CFRAME_TOMOD
{
	BIT bits[SIZE_CODED_FRAME];		// Static table containing bits 
} CODED_FRAME_TOMOD;


void BpskModulator_Init(MODULATED_FRAME *);

void BpskModulator_Runnable(void);