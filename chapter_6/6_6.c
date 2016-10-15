#include <stdio.h>
int main(void){
	int lower, upper;
	puts("Enter the lower and upper limits for the table.");
	scanf("%i %i", &lower, &upper);
	puts("number \tsquare \tcube");
	for (int i = lower; i <= upper; ++i){		
		printf("%i \t%li \t%li\n", i, (long) i*i, (long) i*i*i);	
	}	 	
		puts("");
	return 0;
}