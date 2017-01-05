
/*
Chapter 11 Exercise 12:
Write a program that reads input up to EOF 
and reports the number of words, the number of uppercase letters, 
the number of lowercase letters, the number of punctuation characters, 
and the number of digits. Use the ctype.h family of functions.
*/

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