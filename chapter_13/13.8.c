//13.8 Stephen Prata
/*Write a program that takes as command-line arguments a character and zero or more 
filenames. If no arguments follow the character, have the program read the standard 
input. Otherwise, have it open each file in turn and report how many times the character 
appears in each file. The filename and the character itself should be reported along with 
the count. Include error-checking to see whether the number of arguments is correct and 
whether the files can be opened. If a file can’t be opened, have the program report that 
fact and go on to the next file.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING 248

int main(int argc, char const *argv[]) {
	FILE * file;	
	int get_amount (FILE * stream, char ch);

	if (argc == 1) {
		fprintf(stderr, "Usage: %s ch file1 file2 ...\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if (argc == 2) {
		file = stdin;
		puts("Please, enter text:");
		printf("Standard input contains %d characters %c.\n", get_amount(file, *argv[1]), *argv[1]);
	}
	else {
		for (int i = 2; i < argc; ++i) {
			if ((file = fopen(argv[i], "r")) == NULL){
				fprintf(stderr, "Can't open %s\n", argv[i]);
				continue;
			}
			printf("File %s contains %d characters %c.\n", argv[i], get_amount(file, *argv[1]), *argv[1]);

			if (fclose(file) == EOF) {
				fprintf(stderr, "Can’t close %s\n", argv[i]);
				exit(EXIT_FAILURE);
			}
		}
	}
	return 0;
}

int get_amount(FILE * stream, char ch){
	int count = 0;	
	char * buffer = malloc(STRING);
	char * found;	
	while (fgets(buffer, STRING, stream)){
		found = buffer;
		while ((found = strchr(found, ch))){
			count++;
			found++;
		}		
	}	
	return count;
}