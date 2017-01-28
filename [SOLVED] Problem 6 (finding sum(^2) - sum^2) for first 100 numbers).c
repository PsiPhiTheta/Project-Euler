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

	//initialise variables
	uint64_t sum_of_squares=0, sum=0, square_of_sum=0, diff=0;
    
	//sum of squares
	for(int i; i<=100; i++){
		sum_of_squares+=(i*i);
	}
	printf("The sum of the squares of the first one hundred natural numbers is: %"PRId64" \n", sum_of_squares);
	
	//square of sum
	for(int i; i<=100; i++){
		sum=(sum+i);
	}
	square_of_sum = (sum*sum);
	printf("The square of the sum of the first one hundred natural numbers is: %"PRId64" \n", square_of_sum);
	
	//difference
	diff = square_of_sum-sum_of_squares;
	printf("\nThe difference between the sum of the squares of the first one hundred natural numbers and the square of their sum is: %"PRId64". \n",diff);
	
	return 0;
} 	

//5. FUNCTIONS 


//6. DEBUG STATUS 
	//!debugged
