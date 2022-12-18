/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	LDPC Encoder       
	----------------------------------------------------------------------------

	06/06/2021	
*/

#include<stdio.h>
#include<string.h>

#define SIZE_CODED_FRAME 576
#define SIZE_UNCODED_FRAME 288

typedef  float   BIT;

typedef struct GMATRIX
{
	BIT bits[SIZE_UNCODED_FRAME*(SIZE_CODED_FRAME-SIZE_UNCODED_FRAME)];
}G_MATRIX;


typedef struct CFRAME  
{
	BIT bits[SIZE_CODED_FRAME];		// Static table containing bits 
} CODED_FRAME;

void LdpcEncoder_Init(CODED_FRAME *, G_MATRIX *);

void LdpcEncoder_Runnable(void);
