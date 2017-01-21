/*dice.c --  dice role simulation*/
#include <stdio.h>
#include <stdlib.h> //for rand()
#include "dice.h"

int roll_count;
static int rollem(int sides){
	int roll;
	roll = rand() % sides + 1;
	++roll_count;
	return roll;
}

int roll_n_dice(int dice, int sides){
	int total = 0;
	if (sides < 2) {
		puts("Need at least 2 sides.");
		return -2;
	}
	if (dice < 1) {
		puts("Need at least 1 die.");
		return -1;
	}

	for (int i = 0; i < dice; ++i)
		total += rollem(sides);
	return total;
}