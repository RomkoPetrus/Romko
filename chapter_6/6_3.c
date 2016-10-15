#include <stdio.h>
#define SIZE 6
int main(void){
	for (int i = SIZE; i > 0; --i){
		char variable = 'F';
		for (int j = 0; j < SIZE-i+1; ++j, variable--)
			printf("%c", variable);
		puts(" ");
	}	 	
	return 0;
}