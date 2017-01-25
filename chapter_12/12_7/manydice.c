/*
Chapter 12 Exercise 7:

Write a program that behaves like the modification of Listing 12.13,
which we discussed after showing the output of Listing 12.13.
That is, have the program produce output like the following:
*/

#include <stdio.h>
#include <stdlib.h>		//for srand()
#include <time.h>		//for time()
#include "dice.h"	//for rull_n_dice()

int main(void){
	int set, dice, sides;
	int status;

	srand((unsigned int) time(NULL));	//randomize seed

	printf("Enter the number of sets; enter q to stop: ");
	while (scanf("%d", &set) == 1 && sides > 0){
		printf("How many sides and how many dice? ");
		if ((status = scanf("%d %d", &sides, &dice)) != 2)	{
			if (status == EOF) break;
			else{
				printf("You should have entered an integers.");
				puts("Let's begin again.");
				while (getchar() != '\n') continue; // dispose of bad input
				puts("How many sets? Enter q to stop.");
				continue;
			}
		}
		printf("Here are %d sets of %d %d-sided throws.\n", set, dice, sides);	
		for (int i = 0; i < set; ++i) {			
			printf("%3d ", roll_n_dice(dice, sides));
			if (i % 5 == 4) putchar('\n');			
		}		
		printf("\nHow many sets? Enter q to stop: ");
	}
	printf("The rollem() function was called %d times.\n",
		roll_count);
	puts("GOOD FORTUNE TO YOU!");
	return 0;
}