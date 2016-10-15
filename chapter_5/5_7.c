
#include <stdio.h>
#include <math.h>
int main(void)
{	
	double value, cub;	
	printf("Enter of value: ");
	scanf("%lf", &value);
	cub = pow(value, 3);
	printf("%0.2lf^3 = %0.2lf\n", value, cub);
	return 0; 
}