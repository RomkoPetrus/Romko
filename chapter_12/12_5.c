/*
Chapter 12 Exercise 5:

Write a program that generates a list of 100 random numbers in the range 1–10 
in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11,    
“Character Strings and String Functions,” to type  int.  
In this case, just sort the numbers themselves.
*/

#include <stdio.h>
#include <stdlib.h> //for srand()
#include <time.h> //for time()

#define SIZE 100

void generate (unsigned int * ar);
void sort (unsigned int * ar);

int main (void){
	unsigned int array [SIZE];
	generate(array);
	sort (array);
	return 0;
}

void sort (unsigned int * ar){
	for (int i = 0; i < SIZE; ++i) {
		unsigned int temp;
		for (int j = i+1; j < SIZE; ++j) {
			if (ar[j] > ar[i]) {
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
		printf("%3d", ar[i]);
		if (i % 25 == 24){
			putchar('\n');
		}
	}
}

void generate (unsigned int * ar){	
	srand ((unsigned int ) time(NULL));
	for (int i = 0; i < SIZE; ++i) {
	 	ar[i] = (rand () % 10) + 1;	 	
	}	
}