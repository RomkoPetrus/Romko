#include <stdio.h>
#include <math.h>
#define MAX 4

float Consider1(int x);
float Consider2(int y);
int limit;
int main(void){	
	puts("Enter the limit: ");
	scanf("%i", &limit);
	while(limit>0){
		printf("%f %f\n", Consider1(limit), Consider2(limit));
		scanf("%i", &limit);
	}
	return 0;
}

float Consider1(int x){
	float rez = 0.0;
	for (float i = 1.0; i <= x; ++i)
		rez+=1.0/i;	
	return rez;
}

float Consider2(int y){
	float rez = 0.0;
	int p = 1;
	for (float i = 1.0; i <= y; ++i){
		rez+=p/i;
		p*=-1;
	}
	return rez;
}
