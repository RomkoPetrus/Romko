#include <stdio.h>
#define EARNS 0.08
const long dollars = 100000;
int main(void){
	float rez = 1000000;
	puts("Year\tt Many\t\t %%");
	for (int i = 1; rez>0; ++i)	{
		rez+=rez*EARNS-dollars;
		printf("%i\t %0.2f\t %0.1f\n", i, rez, rez*EARNS);
	}	
	return 0;
}