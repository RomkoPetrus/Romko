#include <stdio.h>
int main(void){
	char letter;
	puts("Enter an uppercase letter");
	scanf("%c", &letter);
	int rows = letter-'A';
	for (int i = 0; i <= rows; ++i){		 
		for (int j = 0; j < rows - i; ++j)
			printf(" ");
		for (int k = 0; k < i + 1; ++k)
			printf("%c", 'A' + k);		
		for (int l = i;  l > 0; --l)
			printf("%c", 'A'+l-1);		
		puts("");
	}	 	
	return 0;
}