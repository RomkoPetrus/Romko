
#include <stdio.h>
int main(void){	
	int count, sum; 
	count = 0; 
	sum = 0; 
	printf("Enter number of days: ");
	scanf("%d", &count);
	for (int i = 1; i <= count; ++i){
		sum = sum + i*i; 
		printf("%d\n", sum);
	}
	printf("sum = %d\n", sum);
	return 0; 
}