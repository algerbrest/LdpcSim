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


void main(void){

UNCODED_FRAME uframe;

/////////////////////////////////////////////
// Init. function - intitialize all the units
///////////////////////////////////////////// 
printf("\n***** Init start ***** \n");

// Init. the FrameGenerator Unit
(void) FrameGenerator_Init(&uframe);



printf("***** Init done *****\n\n");
/////////////////////////////////////////////
// Runnable function
/////////////////////////////////////////////
printf("***** Simulation Start ***** \n");
(void) FrameGenerator_Runnable(&uframe);



printf("***** Simulation End ***** \n");

//return(0);
}