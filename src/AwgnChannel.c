/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	AWGN Channel
	----------------------------------------------------------------------------

	29/12/2022
*/

#include"../include/AwgnChannel.h"



void AwgnChannel_Init(AWGN_MODULATED_FRAME* awgnmf)
{
	memset(awgnmf->bits, 0, SIZE_MODULATED_FRAME * sizeof(awgnmf->bits[0]));
	printf("AWGNChannel Initilized\n");
}

void AwgnChannel_Runnable(void)
{

}