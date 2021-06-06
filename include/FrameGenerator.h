
/* 
	LDPC Codec 
	----------------------------------------------------------------------------
	Bit Generator       
	----------------------------------------------------------------------------

	03/06/2021	
*/

/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	Bit Generator       
	----------------------------------------------------------------------------

	03/06/2021	
*/


#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define SIZE_UNCODED_FRAME 288

typedef  float   BIT;

typedef struct UFRAME 
{
	BIT bits[SIZE_UNCODED_FRAME];		// Static table containing bits 
} UNCODED_FRAME;

void FrameGenerator_Init(UNCODED_FRAME *);
void FrameGenerator_Runnable(UNCODED_FRAME *);
