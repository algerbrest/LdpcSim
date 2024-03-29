/* 
	LDPC Codec 
	----------------------------------------------------------------------------
	Frame Generator   ->  LDPC Encoding  ->  BPSK Mod   ->    --------------	
									    	        	       AWGN channel   	
    Frame Comparison  <-  LDPC Decoding  <-  BPSK Demo  <-    --------------
	----------------------------------------------------------------------------

	19/12/2022	
*/

//#define DEBUG_DATA



#include"../include/MainldpcSimu.h"
#include"../include/FrameGenerator.h"
#include "../include/LdpcEncoder.h"
#include "../include/BpskModulator.h"
#include"../include/AwgnChannel.h"
#include "../include/BpskDemodulator.h"
#include "../include/LdpcDecoder.h"




void main(void){

UNCODED_FRAME uframe;   // from FrameGenerator.h
CODED_FRAME cframe;		// from LdpcEncoder.h
G_MATRIX gmatrix;		// from LdpcEncoder.h
MODULATED_FRAME mframe; // from BpskModulator.h
AWGN_MODULATED_FRAME awgnmframe; // from AwgnChannel.h
DEMODULATED_FRAME dmframe; // from BpskDemodulator.h
H_MATRIX hmatrix;		// from LdpcDecoder.h
DECODED_FRAME dcframe;	// from LdpcDecoder.h



int x = 0xa;
printf("   %08x\n", x);
printf("   %04x\n",(x<<1));

/////////////////////////////////////////////
// Init. function - intitialize all the units
///////////////////////////////////////////// 
printf("\n***** Init start ***** \n");

// Timestamp 
	

// Init. the FrameGenerator Unit
(void) FrameGenerator_Init(&uframe);

// Init. the LdpcEncoder Unit
(void) LdpcEncoder_Init(&cframe,&gmatrix);

// Init. the BpskModulator Unit
(void) BpskModulator_Init(&mframe);

// Init. the AwgnChannel Unit
(void)AwgnChannel_Init(&awgnmframe);

// Init. the BpskDemodulator Unit
(void)BpskDemodulator_Init(&dmframe);

// Init. the LdpcDecoder Unit
(void) LdpcDecoder_Init(&dcframe, &hmatrix);



// Init. the FrameComparator Unit


// Timestamp 


printf("***** Init done *****\n\n");
printf("\n");
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
printf("Frame %d first bits are %f %f %f %f %f\n",i,uframe.bits[0],uframe.bits[1],uframe.bits[2],uframe.bits[3],uframe.bits[4]);
#endif
// Run the LdpcEncoder Unit
(void) LdpcEncoder_Runnable();


// Run the BpskModulator Unit
(void) BpskModulator_Runnable();
}

// Run the LdpcDecoder Unit
(void) LdpcDecoder_Runnable();


// Timestamp 

printf("***** Runnable End ***** \n\n");

}