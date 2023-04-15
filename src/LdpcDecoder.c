
/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Decoder - BPA : Believe Propagation Algorithm
	----------------------------------------------------------------------------

	10/04/2023
*/

#include "../include/LdpcDecoder.h"


void LdpcDecoder_Init(DECODED_FRAME* df, H_MATRIX* hm)
{
	memset(df->bits, 0, SIZE_DECODED_FRAME * sizeof(df->bits[0]));


	// Load the Generator Matrix --> Used for the encoding 
	FILE* fp_h;
	if ((fp_h = fopen("../src/h_matrix.txt", "rt")) == NULL)
		{
			printf(" 'h_matrix.txt' opening is impossible !");
		}
	else
		{
			for (int i = 0; i < SIZE_PARITY_BITS; i++)   // M 
			{
				for (int j = 0; j < SIZE_CODED_FRAME; j++)   // (N-M)
				{
				//fscanf(fp_h, "%d", (G + j) + i * (N - M));
				if (fscanf(fp_h, "%f", &hm->bits[j + i * SIZE_CODED_FRAME]) == 0)
				{
				printf(" 'h_matrix.txt' reading is impossible !");
				}
				else {
				// Read of the element from the file succeeded.
				}
		    }
	    }
	}


}