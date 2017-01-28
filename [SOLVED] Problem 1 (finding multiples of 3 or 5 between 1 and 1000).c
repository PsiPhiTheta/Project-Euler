#include <stdio.h>
//#include <math.h>
//#include <gsl/gsl_linalg.h>
//#include <stdbool.h>

//#define PI 3.1415926
//#define E0 0.00000000000885
//#define E 2.71828182846

int main(void) { 

//computes sum of multiples of 3

	int array_3[1000] = {0}; //creates array for the sum of multiples of 3

	for (int i=1; i<1000; i++) {
		if (i%3 == 0){
			array_3[i]=i;
			//printf("%d \n", i);
		}
	}
	
	int sum_3 = 0;
	
	for (int i=0; i<1000;i++) {
	sum_3 += array_3[i];
	//printf("Sum_3 = %d \n", sum_3);
	}
	
	printf("Sum_3 = %d \n", sum_3);
	
//computes sum of multiples of 3
	
	int array_5[1000] = {0}; //creates array for the sum of multiples of 5
	
	for (int i=1; i<1000; i++) {
		if (i%5 == 0){
			array_5[i]=i;
			//printf("%d \n", i);
		}
	}
	
	int sum_5 = 0;
	
	for (int i=0; i<1000;i++) {
	sum_5 += array_5[i];
	//printf("Sum_5 = %d \n", sum_5);
	}
	
	printf("Sum_5 = %d \n", sum_5);
	
//computes sum of multiples of 3 and 5
	
	int array_35[1000] = {0}; //creates array for the sum of multiples of 5
	
	for (int i=1; i<1000; i++) {
		if ((i%5 == 0)&&(i%3 == 0)){
			array_35[i]=i;
			//printf("%d \n", i);
		}
	}
	
	int sum_35 = 0;
	
	for (int i=0; i<1000;i++) {
	sum_35 += array_35[i];
	//printf("Sum_35 = %d \n", sum_35);
	}
	
	printf("Sum_35 = %d \n", sum_35);
	
//computes final sum
	
	int sum_final = sum_3 + sum_5 - sum_35;
	printf("Sum_final = sum_3 + sum_5 - sum_35 = %d \n", sum_final);
	
return 0; 

} 	

//debugged