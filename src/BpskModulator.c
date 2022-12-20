
/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	Bpsk Modulator      
	----------------------------------------------------------------------------

	19/12/2022	
*/



#include "../include/BpskModulator.h"

void BpskModulator_Init(CODED_FRAME_TOMOD* cf, MODULATED_FRAME* mf)
{
	// Initialize the CODED_FRAME buffer	
memset(cf->bits, 0, SIZE_CODED_FRAME * sizeof(cf->bits[0]));
memset(mf->bits, 0, SIZE_MODULATED_FRAME * sizeof(mf->bits[0]));
printf("BpskModulator Initilized\n");
}

void BpskModulator_Runnable(void)
{
printf("BpskModulator Run \n");
}