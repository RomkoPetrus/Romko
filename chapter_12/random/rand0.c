/*rand0.c -- produces random numbers*/
#include <stdio.h>

static unsigned long int next;

int random (void){
	//magic formula to generate pseudorandom number
	next = next * 1103515245 + 12345;
	return (unsigned long int) (next/65536) % 32768;
}

void srand1 (unsigned long int seed){
	next = seed;
}