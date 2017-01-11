/*
Chapter 11 Exercise 16:
Write a program that reads input until end-of-file and echoes it to the display. 
Have the program recognize and implement the following command-line arguments:
  -p     Print input as is  
  -u     Map input to all uppercase  
  -l     Map input to all lowercase 
Also, if there are no command-line arguments, 
let the program behave as if the –p argument had been used.
*/
#include <stdio.h>
#include <string.h> // for int strcmp(const char *, const char *);
#include <ctype.h> // for toupper(), tolower()
#define P "-p"
#define U "-u"
#define L "-l"

int main(int argc, char const *argv[]){
	int ch;
	while ((ch = getchar()) != EOF){
		if ((argc == 1) || (strcmp (argv[1], P) == 0)) putchar(ch);		
		else if (strcmp (argv[1], U) == 0) putchar(toupper (ch));
		else if (strcmp (argv[1], L) == 0) putchar(tolower (ch));
		else { 
			puts ("BY!");
			break;
		}
	}
	return 0;
}