//0. INFORMATION
	//Author: Thomas Hollis

	
//1. INCLUSIONS
	#include <stdio.h> 
	#include <stdlib.h>
	//#include <string.h>
	#include <math.h>
	#include <inttypes.h>
	//#include <complex.h>
	//#include <ctype.h>
	//#include <gsl/gsl_linalg.h>
	//#include <stdbool.h>

	
//2. DEFINITIONS	
	//#define PI 3.1415926
	//#define E 2.71828182846
	//#define E0 0.00000000000885
	

//3. FUNCTION PROTOTYPES
	
	
//4. MAIN 
	int main(void) {

		//variable declaration
		uint64_t maxChain = 0, chain = 0, collatz = 0, maxCollatz = 0, i = 1;
		
		//processing solution
            while(i < 1000000) {
                chain = 1;
                collatz = i;
                while(collatz != 1) {
                    if(collatz % 2 != 0) {
                        collatz = (3 * collatz) + 1;
                        chain++;
                    }
                    while(collatz % 2 == 0) {
                        collatz /= 2;
                        chain++;
                    }
                 
                }
                if(chain > maxChain)
                {
                    maxChain = chain;
                    maxCollatz = i;
                }
                i++;
			}
		
		//print output
		printf("\n Sequence length: %"PRId64" \n Starting number: %"PRId64" \n", maxChain, maxCollatz);
	
		return 0;
	}

//5. FUNCTIONS 


//6. DEBUG STATUS 
	//!debugged
