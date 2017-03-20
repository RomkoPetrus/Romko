//13.3 St.Prata
/*Write a file copy program that prompts the user to enter the name of a text file to act as 
the source file and the name of an output file. The program should use the  toupper()  
function from  ctype.h  to convert all text to uppercase as it’s written to the output file. 
Use standard I/O and the text mode.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LEN 81

char name[2][LEN];
FILE * source, * output;
void get_name(char * ar);

int main(void) {
	int ch;

	puts("Enter the name of the sourse file: ");
	get_name(name[0]);

	puts("Enter the name of the output file: ");
	get_name(name[1]);
	

	if ((source = fopen(name[0], "r")) == NULL) {
		fprintf(stderr, "Can't open %s \n", name[0]);
		exit(EXIT_FAILURE);
	}
	if ((output = fopen(name[1], "w")) == NULL) {
		fprintf(stderr, "Can't open %s \n", name[1]);
		exit(EXIT_FAILURE);
	}
	
	while ((ch = getc(source)) != EOF){			
		putchar(toupper(ch));
		putc(toupper(ch), output);		
	}

	fclose(source);
	fclose(output);

	return 0;
}

void get_name(char * ar){
	if ((fgets(ar, LEN, stdin))) {
		while (*ar != '\0') {
			if (*ar == '\n') {
				*ar = '\0';
				break;
			}
			ar++;
		}
	}
	else{
		fprintf(stderr, "Error input data!\n");
		exit(EXIT_FAILURE);
	}
}