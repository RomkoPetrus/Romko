
/*
Chapter 11 Exercise 14:
Write a power-law program that works on a command-line basis. 
The first command-line argument should be the type double number to be raised to a certain power, 
and the second argument should be the integer power.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	double num, result;
	int pow = 0;

	if (argc == 3) {
		num = atof(argv[1]);
		pow = atoi(argv[2]);
	}
	else{
		printf("%s\n", "incorrect flags!");
		return 1;
	}
	result = num;
	for (int i = 0; i < pow - 1; ++i) {
		result *= num;
	}
	printf("%0.3f ^ %i = %0.3f\n", num, pow, result);
	return 0;
}