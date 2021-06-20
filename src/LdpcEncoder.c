
/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Encoder       
	----------------------------------------------------------------------------

	06/06/2021	
*/



#include "../include/LdpcEncoder.h"

void LdpcEncoder_Init(CODED_FRAME *cf)
{
memset(cf->bits, 0, SIZE_CODED_FRAME*sizeof(cf->bits[0]));
printf("LdpcEncoder Initilized\n");
}

void LdpcEncoder_Runnable(void)
{
printf("LdpcEncoder Run \n");
}

