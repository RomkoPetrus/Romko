#include <stdio.h>
#define SIZE 6
int main(void){
	char variable = 'A';
	for (int i = SIZE; i > 0; --i){		
		for (int j = 0; j < SIZE-i+1; ++j, ++variable)
			printf("%c", variable);
		puts(" ");
	}	 	
	return 0;
}