/*
Chapter 12 Exercise 6:

Write a program that generates 1,000 random numbers in the range 1–10. 
Don’t save or print the numbers, but do print how many times each number was produced. 
Have the program do this for 10 different seed values. 
Do the numbers appear in equal amounts? 
You can use the functions from this chapter or the ANSI C rand() and srand() functions, 
which follow the same format that our functions do. 
This is one way to examine the randomness of a particular random-number generator.
*/

#include <stdio.h>
#include <stdlib.h> // for srand(), rand;
#include <time.h> 

#define RANGE 10
#define SEED 10
#define LOOPS 1000

void generate (void);
void show (int *ar);

int main(void) {
	srand(time(NULL));
	for (int i = 1; i <= RANGE; ++i) printf("%-4d ", i);
	putchar('\n');
	for (int i = 0; i < SEED; ++i) generate();
	return 0;
}

void generate (void){
	int array[RANGE] = {0};
	for (int i = 0; i < LOOPS; ++i)	array[rand() % RANGE]++;
	for (int i = 0; i < RANGE; ++i) printf("%-4d ", array[i]);
	putchar('\n');
}