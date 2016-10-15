#include <stdio.h>
#include <string.h>
#define SIZE 20
int main(void){
	char word[SIZE];	
	puts("Enter the single word.");
	scanf("%s", word);
	for (int i = strlen(word); i >= 0; --i)
		printf("%c", word[i]);
	return 0;
}