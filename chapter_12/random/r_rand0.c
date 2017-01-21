#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void srand1(unsigned int x);
extern int random(void);
int main(void){
	srand1((unsigned long int) time(NULL)); /*reset seed*/
		for (short count = 0; count < 5; count++)
			printf("%d\n", random());
	puts("Done");
	return 0;
}