
/*
Chapter 11 Exercise 15:
Use the character classification functions to prepare an implementation of  atoi();
have this version return the value of 0 if the input string is not a pure number.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int myAtoi(const char * ar);

int main(int argc, char *argv[]) {
	if (argc > 1) {
		printf("\n%i\n", myAtoi(argv[1]));
	}
	else
		puts("By!");
	return 0;
}

int myAtoi(const char * ar){
	int number = 0;
		// converts string to integer
	while (*ar != '\0'){
		if (isdigit(*ar)){			
			number *= 10; 
			number += (*ar - '0');
			ar++;			
		} 
		//  return 0 if the input string is not a pure number		
		else return 0;	
	}	
	return number;
}