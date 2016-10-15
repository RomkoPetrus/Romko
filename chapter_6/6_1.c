#include <stdio.h>
#define SIZE 26
char alphabet[SIZE];
int main(void){
	char variable = 'a';
	for (int i = 0; i < SIZE; i++, variable++)
		alphabet[i] = variable;
	puts(" "); 
	for (int i = 0; i < SIZE; i++)
		printf("%c ", alphabet[i]);
	puts(" "); 
	return 0;
}