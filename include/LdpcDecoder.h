/*
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Decoder
	----------------------------------------------------------------------------

	10/04/2023
*/

#include<stdio.h>
#include<string.h>

#define SIZE_CODED_FRAME 576
#define SIZE_PARITY_BITS 288
#define SIZE_DECODED_FRAME  (SIZE_CODED_FRAME-SIZE_PARITY_BITS)

typedef  float   BIT;

typedef struct HMATRIX
{
	BIT bits[SIZE_PARITY_BITS * SIZE_CODED_FRAME];
}H_MATRIX;

typedef struct DFRAME
{
	BIT bits[SIZE_DECODED_FRAME];		// Static table containing bits 
} DECODED_FRAME;

void LdpcDecoder_Init(DECODED_FRAME*, H_MATRIX*);

