/*
Chapter 12 Exercise 3:

Redesign the program described in Programming Exercise 2 so that it uses
only automatic variables. Have the program offer the same user interface—
that is, it should prompt the user to enter a mode, and so on. You’ll have
to come up with a different set of function calls, however.
*/

#include <stdio.h>
#include "pe12-3a.h"
int main(void){  
	int mode = 0;
	int new_mode;  
    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &new_mode);
    while (new_mode >= 0) {
       set_mode(&mode, &new_mode);
       show_info(mode, get_info(mode));
       printf("Enter 0 for metric mode, 1 for US mode");
       printf(" (-1 to quit): ");
       scanf("%d", &new_mode);
    }
    printf("Done.\n");
    return 0;
}