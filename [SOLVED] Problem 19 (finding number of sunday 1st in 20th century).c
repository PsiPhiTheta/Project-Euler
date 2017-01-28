	#include <stdio.h> 
	#include <stdlib.h>
	#include <math.h>
	#include <inttypes.h>

int main(void) { 

	int days_in_year_i=0;
	int days_in_month1=0;
	int days_in_month2=0;
	int days_in_month3=0;
	int day_of_week=0;
	int tot_days=0;
	int tot_sundays=0;
	int tot_sunday1s=0;
	

	for (int i = 1901; i <= 2000; i++) {
        for (int j = 1; j <= 12; j++) {
            if (j == 4 || j == 6 || j == 9 || j == 11) {
                days_in_month1 = 30;
            } else if (j == 2) {
                if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
                    days_in_month3 = 29;
                } else {
                    days_in_month3 = 28;
                }
            } else {
                days_in_month2 = 31;
            }
			days_in_year_i=(days_in_month1*4)+(days_in_month2*7)+days_in_month3;
			
			for (day_of_week=2; day_of_week<=36525 ;day_of_week++){
				if (day_of_week % 7 == 0){
					++tot_sunday1s;
				}
			}		
		}
		tot_days+=days_in_year_i;
		tot_sundays=tot_days/7;
	}
	
	printf("Total number of days from 1 Jan 1901 to 31 dec 2000 is: %d \n", tot_days);
		
	printf("Total number of sundays from 1 Jan 1901 to 31 dec 2000 is: %d \n", tot_sundays);
	
	printf("Total number of sunday 1sts from 1 Jan 1901 to 31 dec 2000 is: %d \n", tot_sunday1s);
	
	return 0;
} 	

//100 years * 12 firsts per year * (1/7) chance of being a Sunday = expected 171.428571429 Sunday firsts.
