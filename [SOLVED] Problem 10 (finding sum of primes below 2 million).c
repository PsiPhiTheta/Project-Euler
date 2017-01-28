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
	int check_prime(uint64_t);
	
//4. MAIN 

//Question:
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

int main(void) { 

	//initialise variables
	uint64_t sum=0, num=0;
	int result=0;
    
	//check if prime & sum
	for (; num<=2000000 ;num++){	
		result = check_prime(num);
		if (result==1){
			//printf("%"PRId64" is prime.\n", num);
			sum=(sum+num);
		}
		else {
			//printf("%"PRId64" is not prime.\n", num);
		}
	}
	
	printf("The sum of the primes smaller than 2 million: %"PRId64" \n", sum);
		
	return 0;
} 	

//5. FUNCTIONS 
	int check_prime(uint64_t a) {
		int c;
 		for ( c = 2 ; c <= a - 1 ; c++ ) { 
			if ( a%c == 0 )
			return 0;
		}
		if ( c == a ){
			return 1;
		}		
	}

//6. DEBUG STATUS 
	//!debugged
