
#include <stdio.h>
double value; 
void cub(double);
int main(void){		
	printf("Enter of value: ");
	scanf("%lf", &value);
	cub(value);
	return 0; 
}

void cub(double x){	
	printf("%0.2lf^3 = %0.2lf\n", value, x*x*x);	
}