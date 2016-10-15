
#include <stdio.h>
int main(void){	
	int first, second; 
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%i", &second);
	printf("Now enter the first operand: ");
	scanf("%i", &first);
	while(first > 0){
		printf("%i %% %i is %i\n", first, second, first % second);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%i", &first);
	}	
	return 0; 
}