#include <stdio.h>
#include <string.h>
int main(void){
	float first=0.0, second=0.0;
	puts("Enter two floating-point numbers.");	
	while(scanf("%f %f", &first, &second) == 2){
		printf("%.3f\n", (first - second) / (first * second));
		puts("Enter pairs of input values or q to quit.");	
	}
	return 0;
}