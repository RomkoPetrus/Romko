#include <stdio.h>
#define DONBAR 150
int Friends = 5;
int main(void){
	puts("week\t Friends\t\t ");
	for (int i = 1; Friends < DONBAR; ++i){
		Friends = (Friends - i) * 2;
		if(Friends > DONBAR)
			break;	
		printf("%i\t %i\n", i, Friends);
	}	
	return 0;
}