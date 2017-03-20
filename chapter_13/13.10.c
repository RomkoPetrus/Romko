//13.10 Stephen Prata
/*Write a program that opens a text file whose name is obtained interactively. Set up a 
loop that asks the user to enter a file position. The program then should print the part of 
the file starting at that position and proceed to the next newline character. Let negative 
or nonnumeric input terminate the user-input loop.*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 80
#define STR 512

void get_st(char * str, int n, FILE * fp);

int main (void) {
	long position;
	FILE * file = stdin;
	char * name = (char*) malloc(LEN);
	char * string = (char*) malloc(STR);
	puts("Enter filename:");
	get_st(name, LEN, file);

	if ((file = fopen(name, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	puts("Please, enter a file position: ");
	while (scanf("%ld", &position) == 1) {
		if (position < 0)
			break;		
		fseek (file, position, SEEK_SET);
		get_st(string, STR, file);
		puts(string);		
		puts("Enter new file position: ");
	}
	if (fclose(file) != 0) {
		fputs("Error. Can't close file", stderr);
		exit(EXIT_FAILURE);
	}
	puts("Bay!");

	return 0;
}

void get_st(char * str, int n, FILE * fp){
	fgets(str, n, fp);
	while (*str != '\0'){
		if (*str == '\n') {
			*str = '\0';
			break;
		}
		str++;
	}
}