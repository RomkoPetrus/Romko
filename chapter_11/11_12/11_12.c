#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){	
	char ch = -1;
	char temp = ' ';
	int count,  words, uppercase,  lowercase,  punctuation, digits;
	count = words = uppercase = lowercase = punctuation = digits = 0;	
	puts("Enter String:\n");
	while ((ch = getchar()) != EOF) {
		if (isalnum(ch)) {
			if (isdigit(ch)) digits++;
			if (islower(ch)) lowercase++;
			if (isupper(ch)) uppercase++;
			if (isspace(temp) || ispunct(temp)) {			
				words++;
			}
		}
		else if (ispunct(ch))
			punctuation++;		
		temp = ch;
		count++;
	}
		printf("words %d\n", words);
		printf("uppercase %d\n", uppercase);
		printf("lowercase %d\n", lowercase);
		printf("punctuation %d\n", punctuation);
		printf("digits %d\n", digits);
		printf("count %d\n", count);
		getchar();
	return 0;
}