#include <stdio.h>
#include <string.h>
float fanction(float a, float b);
float first=0.0, second=0.0;
int main(void){	
	puts("Enter two floating-point numbers.");
	while(scanf("%f %f", &first, &second) == 2){
		printf("%f\n", fanction(first, second));	
		puts("Enter pairs of input values or q to quit.");
	}
	return 0;
}

float fanction(float a, float b){	
	return (a - b) / (a * b);
}