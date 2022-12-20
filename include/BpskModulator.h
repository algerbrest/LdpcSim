/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	BPSK Mod.       
	----------------------------------------------------------------------------

	08/06/2021	
*/

#include<stdio.h>


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


void BpskModulator_Init(CODED_FRAME_TOMOD*,MODULATED_FRAME *);

void BpskModulator_Runnable(void);