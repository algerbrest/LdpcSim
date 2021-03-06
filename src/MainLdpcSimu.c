/* 
	LDPC Codec 
	----------------------------------------------------------------------------
	Bit Generator   ->  LDPC Encoding  ->  BPSK Mod   ->    --------------	
									    	        	     AWGN channel   	
    Bit Comparison  <-  LDPC Decoding  <-  BPSK Demo  <-    --------------
	----------------------------------------------------------------------------

	03/06/2021	
*/





#include"../include/MainldpcSimu.h"
#include"../include/FrameGenerator.h"
#include "../include/LdpcEncoder.h"
#include "../include/BpskModulator.h"



void main(void){

UNCODED_FRAME uframe;   // from FrameGenerator.h
CODED_FRAME cframe;		// from LdpcEncoder.h


int x = 0xa;


printf("/n   %04x  /n",(x<<2));

/////////////////////////////////////////////
// Init. function - intitialize all the units
///////////////////////////////////////////// 
printf("\n***** Init start ***** \n");

// Timestamp 
	

// Init. the FrameGenerator Unit
(void) FrameGenerator_Init(&uframe);

// Init. the LdpcEncoder Unit
(void) LdpcEncoder_Init(&cframe);

// Init. the LdpcEncoder Unit
(void) BpskModulator_Init();

// Timestamp 


printf("***** Init done *****\n\n");
/////////////////////////////////////////////
// Runnable function
/////////////////////////////////////////////
printf("***** Runnable Start ***** \n");

// Timestamp 
for(int i=0;i<NUM_FRAMES;i++)
{

printf("** Run Frame  %d \n" ,i);

// Run the FrameGenerator Unit	
(void) FrameGenerator_Runnable(&uframe);
#ifdef DEBUG_DATA 
printf("Frame %d first bits is %f %f %f %f %f\n",i,uframe.bits[0],uframe.bits[1],uframe.bits[2],uframe.bits[3],uframe.bits[4]);
#endif
// Run the LdpcEncoder Unit
(void) LdpcEncoder_Runnable();

// Run the BpskModulator Unit
(void) BpskModulator_Runnable();
}

// Timestamp 

printf("***** Runnable End ***** \n\n");

}