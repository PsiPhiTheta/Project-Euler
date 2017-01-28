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

//Question:
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

int main(void) { 

	uint64_t number=0;
    
	printf("\nThe prime factors of %"PRId64" are: \n\n",number);
    
    while(number!=0){
        if(number%div!=0)
            div = div + 1;
        else {
            number = number / div;
            printf("%"PRId64" ",div);
            if(number==1)
                break;
        }
    }
    return 0;
} 	

//5. FUNCTIONS 


//6. DEBUG STATUS 
	//!debugged
