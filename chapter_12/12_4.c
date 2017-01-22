/*
Chapter 12 Exercise 4:

Write and test in a loop a function
that returns the number of times it has been called.
*/

#include <stdio.h>

unsigned int function(void);

int main (void){
	int count;
	puts("Enter number of loops: ");
	scanf("%d", &count);
	unsigned int n = 0;

	for (int i = 0; i < count; ++i) {
		n = function();
	}
	printf("Number of calls is %d\n", n);
	return 0;
}

unsigned int function(void){
	static unsigned int times;
	return ++times; 
}