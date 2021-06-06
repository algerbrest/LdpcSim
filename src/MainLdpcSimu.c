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




void main(void){

UNCODED_FRAME uframe;

/////////////////////////////////////////////
// Init. function - intitialize all the units
///////////////////////////////////////////// 
printf("\n***** Init start ***** \n");

// Init. the FrameGenerator Unit
(void) FrameGenerator_Init(&uframe);

// Init. the LdpcEncoder Unit
(void) LdpcEncoder_Init();



printf("***** Init done *****\n\n");
/////////////////////////////////////////////
// Runnable function
/////////////////////////////////////////////
printf("***** Simulation Start ***** \n");

for(int i=0;i<NUM_FRAMES;i++)
{
(void) FrameGenerator_Runnable(&uframe);
#ifdef DEBUG 
printf("Frame %d first bits is %f %f %f %f %f\n",i,uframe.bits[0],uframe.bits[1],uframe.bits[2],uframe.bits[3],uframe.bits[4]);
#endif
(void) LdpcEncoder_Runnable();
}

printf("***** Simulation End ***** \n\n");

}