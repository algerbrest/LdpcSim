
/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Decoder - BPA : Believe Propagation Algorithm
	----------------------------------------------------------------------------

	10/04/2023
*/

#include "../include/LdpcDecoder.h"


void LdpcDecoder_Init(DECODED_FRAME* df, H_MATRIX* H)
{
	memset(df->bits, 0, SIZE_DECODED_FRAME * sizeof(df->bits[0]));

}