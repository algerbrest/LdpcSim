
/* 
	LDPC Codec Sim.
	----------------------------------------------------------------------------
	Bit Generator       
	----------------------------------------------------------------------------

	03/06/2021	
*/



#include"../include/FrameGenerator.h"
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>




void FrameGenerator_Init(UNCODED_FRAME *uf){
memset(uf->bits, 0, SIZE_UNCODED_FRAME*sizeof(uf->bits[0]));
srand( time( NULL ) );
printf("FrameGenerator Initilized\n");
}


void FrameGenerator_Runnable(UNCODED_FRAME *uf){

float random;


    for(int i=0;i<SIZE_UNCODED_FRAME;i++)
    {
        random = (float)((float)rand()/((float)RAND_MAX));
        if (random < 0.5)
        {
            uf->bits[i]= 0;
        }
        else{
            uf->bits[i]= 1;
        }        
    }
printf("FrameGenerator Run \n");

}