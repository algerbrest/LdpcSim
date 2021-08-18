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
time_t timestamp;
struct tm *t;


/////////////////////////////////////////////
// Init. function - intitialize all the units
///////////////////////////////////////////// 
printf("\n***** Init start ***** \n");

// Timestamp 
timestamp = time (NULL);
t = localtime(&timestamp);
printf ("Init starts at: %d/%d  -->  %02uh %02um %02us\n", t->tm_mday, t->tm_mon, t -> tm_hour, t -> tm_min, t -> tm_sec);
	

// Init. the FrameGenerator Unit
(void) FrameGenerator_Init(&uframe);

// Init. the LdpcEncoder Unit
(void) LdpcEncoder_Init(&cframe);

// Init. the LdpcEncoder Unit
(void) BpskModulator_Init();

// Timestamp 
timestamp = time (NULL);
t = localtime(&timestamp);
printf ("Init ends at: %d/%d  -->  %02uh %02um %02us\n", t->tm_mday, t->tm_mon, t -> tm_hour, t -> tm_min, t -> tm_sec);


printf("***** Init done *****\n\n");
/////////////////////////////////////////////
// Runnable function
/////////////////////////////////////////////
printf("***** Runnable Start ***** \n");

// Timestamp 
timestamp = time (NULL);
t = localtime(&timestamp);
printf ("Runnable starts at: %d/%d  -->  %02uh %02um %02us\n", t->tm_mday, t->tm_mon, t -> tm_hour, t -> tm_min, t -> tm_sec);
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
timestamp = time (NULL);
t = localtime(&timestamp);
printf ("Runnable starts at: %d/%d  -->  %02uh %02um %02us\n", t->tm_mday,  t->tm_mon, t -> tm_hour, t -> tm_min, t -> tm_sec);

printf("***** Runnable End ***** \n\n");

}