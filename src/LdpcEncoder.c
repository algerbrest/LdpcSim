
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
// Initialize the CODED_FRAME buffer	
memset(cf->bits, 0, SIZE_CODED_FRAME*sizeof(cf->bits[0]));

// Load the Generator Matrix --> Used for the encoding 
FILE *fp_g;
if ( (fp_g = fopen("g_matrix.txt","rt")) == NULL )
	{
	printf(" 'g_matrix.txt' opening is impossible !");
}else
{
	fclose(fp_g);
}



// Init. FInished
printf("LdpcEncoder Initilized\n");
}

void LdpcEncoder_Runnable(void)
{
printf("LdpcEncoder Run \n");
}

