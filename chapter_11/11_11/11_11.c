
/*
Chapter 11 Exercise 11:
Write a program that reads in up to 10 strings or to  EOF,
whichever comes first. Have it offer the user a menu with five choices: 
print the original list of strings, print the strings in ASCII collating sequence, 
print the strings in order of increasing length, 
print the strings in order of the length of the first word in the string, and quit. 
Have the menu recycle until the user enters the quit request. 
The program, of course, should actually perform the promised tasks.
*/
#include <stdio.h>
#include <string.h>
#include "11_11.h" 

int main(void){
	char strings[STR][MAX] = {'\0'};
	int lenth[MAX] = {0};

	printf ("Please, enter %d strings\n", STR);
	input(strings);
	
	short ch = 0;
	while (ch != 5) {
		menu();
		scanf("%hi", &ch);
		switch (ch) {
		case 1:
			for (int i = 0; i < STR; i++) {
				if (strings[i][0] == '\0') break;
				puts(strings[i]);
			}
			break;
		case 2:
			for (int i = 0; i < STR; i++) {
				lenth[i] = strings[i][0];
			}
			sort(strings, lenth);
			break;
		case 3:
			for (int i = 0; i < STR; i++)
				lenth[i] = strlen(strings[i]);
			sort(strings, lenth);
			break;
		case 4:
			for (int i = 0; i < STR; i++){
				short count = 0;
				while (strings[i][count] != ' ' && strings[i][count] != '\0') count++;
				lenth[i] = count;
			}
			sort(strings, lenth);
			break;
		case 5:
			break;
		default:
			puts("Pleace, input 1, 2, 3, 4 or 5");
		}	
	}
	return 0;
}