/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	Bpsk Demodulator
	----------------------------------------------------------------------------

	04/03/2023
*/



#include "../include/BpskDemodulator.h"

void BpskDemodulator_Init(DEMODULATED_FRAME* dmf)
{
	// Initialize the DEMOD_FRAME buffer	
	memset(dmf->bits, 0, SIZE_DEMODULATED_FRAME * sizeof(dmf->bits[0]));
	printf("BpskDemodulator Initilized\n");
}

void BpskDemodulator_Runnable(void)
{
	printf("BpskDemodulator Run \n");
}