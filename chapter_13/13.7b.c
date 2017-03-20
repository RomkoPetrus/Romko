//13.7 Stephen Prata
/*Write a program that opens two files. You can obtain the filenames either by using 
command-line arguments or by soliciting the user to enter them.*/
/*a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the 
first file, line 2 of the second file, and so on, until the last line of the longer file (in 
terms of lines) is printed*/
/*b. Mo dify the program so that lines with the same line number are printed on the 
same line*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 81
#define BUF 512

char * get_string(char * array, int n, FILE * stream){
	char * pount;

	pount = fgets(array, n, stream);
	while (*array != '\0') {
		if (*array == '\n')
			*array = '\0';		
		array++;				
	}	
	return pount;
}

int main(void) {
	FILE * file1, * file2;
	char name1[LEN];	
	char name2[LEN];
	char * buffer = malloc(BUF);	

	for (int i = 0; i < 2; ++i)	{
		printf("Type a file%d name:\n", i + 1);
		if (i == 0)
			get_string(name1, LEN, stdin);
		else
			get_string(name2, LEN, stdin);			
	}
	if ((file1 = fopen(name1, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", name1);
		exit(EXIT_FAILURE);
	}
	if ((file2 = fopen(name2, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", name2);
		exit(EXIT_FAILURE);
	}	
	
	do {		
		if(get_string(buffer, BUF, file1)){
			fputs(buffer, stdout);
			putchar(' ');
		}
		if(get_string(buffer, BUF, file2)){
			fputs(buffer, stdout);
			puts("");
		}

		if (feof(file1) && feof(file2))
			break;
		if (ferror(file1)) {
			fprintf(stderr, "Can't read %s\n", name1);
			exit(EXIT_FAILURE);
		}
		if (ferror(file2)) {
			fprintf(stderr, "Can't read %s\n", name2);
			exit(EXIT_FAILURE);
		}
	} while (1);

	if (fclose(file1) != 0 || fclose(file2) != 0)
		fputs("Error in cljsing files\n", stderr);
	return 0;
}