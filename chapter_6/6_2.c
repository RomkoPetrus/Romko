#include <stdio.h>
#define SIZE 5
const char variable = '$';
int main(void){
	for (int i = SIZE; i > 0; --i){
		for (int j = 0; j < SIZE-i+1; ++j)
			printf("%c", variable);				
		puts(" ");
	}	 	
	return 0;
}