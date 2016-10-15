#include <stdio.h>
int sums(int a, int b);
int lower=0, upper=0;
int main(void){	
	puts("Enter lower and upper integer limits: ");	
	while(scanf("%i %i", &lower, &upper) == 2){
		if(upper <= lower){
			puts("Done");
			break;
		}
		printf("The sums of the squares from %i to %i is %i\n", lower*lower, upper*upper, sums(lower, upper));	
		puts("Enter next set of limits or q to quit: ");
	}
	return 0;
}

int sums(int a, int b){
	int rez=0;	
	for (int i = a; i <= b; ++i)
		rez += i * i;
	return rez;
}