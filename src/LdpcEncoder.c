
/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Encoder       
	----------------------------------------------------------------------------

	06/06/2021	
*/

#pragma warning (disable : 4996)

#include "../include/LdpcEncoder.h"



void LdpcEncoder_Init(CODED_FRAME *cf, G_MATRIX *gm)
{
// Initialize the CODED_FRAME buffer	
memset(cf->bits, 0, SIZE_CODED_FRAME*sizeof(cf->bits[0]));

// Load the Generator Matrix --> Used for the encoding 
FILE* fp_g;
if ((fp_g = fopen("../src/g_matrix.txt", "rt")) == NULL)
{
	printf(" 'g_matrix.txt' opening is impossible !");
}
else
{
	for (int i = 0; i < SIZE_UNCODED_FRAME; i++)   // M 
	{
		for (int j = 0; j < (SIZE_CODED_FRAME - SIZE_UNCODED_FRAME); j++)   // (N-M)
		{
			//fscanf(fp_g, "%d", (G + j) + i * (N - M));


		}
	}




}

// Init. FInished
printf("LdpcEncoder Initilized\n");
}

void LdpcEncoder_Runnable(void)
{
printf("LdpcEncoder Run \n");
}

