#include <stdio.h>
#include <stdlib.h>		//for srand()
#include <time.h>		//for time()
#include "dice.h"	//for rull_n_dice()

int main(void){
	int dice, roll;
	int sides, status;

	srand((unsigned int) time(NULL));	//randomize seed
	puts("Enter the number of sides per die, 0 to STOP.");
	while (scanf("%d", &sides) == 1 && sides > 0){
		puts("How many dice?");
		if ((status = scanf("%d", &dice)) != 1)	{
			if (status == EOF) break;
			else{
				printf("You should have entered an integer.");
				puts("Let's begin again.");
				while (getchar() != '\n') continue; // dispose of bad input
				puts("How many sides? Enter 0 to stop.");
				continue;
			}
		}
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",
			roll, dice, sides);
		puts("How many sides? Enter 0 to stop.");
	}
	printf("The rollem() function was called %d times.\n",
		roll_count);
	puts("GOOD FORTUNE TO YOU!");
	return 0;
}