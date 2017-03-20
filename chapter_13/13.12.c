//13.12 Stephen Prata
/*Create a text file consisting of 20 rows of 30 integers. The integers should be in the range 
0–9 and be separated by spaces. The file is a digital representation of a picture, with 
the values 0 through 9 representing increasing levels of darkness. Write a program that 
reads the contents of the file into a 20-by-30 array of int s. In a crude approach toward 
converting this digital representation to a picture, have the program use the values 
in this array to initialize a 20-by-31 array of char s, with a 0 value corresponding to a 
space character, a 1 value to the period character, and so on, with each larger number 
represented by a character that occupies more space. For example, you might use  #  to 
represent 9. The last character (the 31st) in each row should be a null character, making 
it an array of 20 strings. Have the program display the resulting picture (that is, print the 
strings) and also store the result in a text file. For example, suppose you start with this 
data:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30

int main(void) {
	FILE * file1, *file2;
	int array[ROWS][COLS];
	char picture[ROWS][COLS + 1];
	int i, j;
	
	if ((file1 = fopen("Films.txt", "r")) == NULL) {
		fputs("Can't open Films.txt\n", stderr);
		exit(EXIT_FAILURE);
	}
	if ((file2 = fopen("s", "w")) == NULL) {
		fputs("Can't open s\n", stderr);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLS; ++j) {			
			if(fscanf(file1, "%d", &array[i][j]) != 1){
				fputs("Invalid file (Films.txt)", stderr);
				exit(EXIT_FAILURE);
			}
			switch(array[i][j]){
				case 0:
					picture[i][j] = ' ';
					break;
				case 1:
					picture[i][j] = '.';
					break;
				case 2:
					picture[i][j] = '\'';
					break;
				case 3:
					picture[i][j] = ':';
					break;
				case 4:
					picture[i][j] = '~';
					break;
				case 5:
					picture[i][j] = '*';
					break;
				case 6:
					picture[i][j] = '=';
					break;
				case 7:
					picture[i][j] = '%';
					break;
				case 8:
					picture[i][j] = '#';
					break;
				case 9:
					picture[i][j] = '@';
					break;
			}			
		}
		picture[i][j] = '\0';
		puts(picture[i]);
		fprintf(file2, "%s\n", picture[i]);		
	}
	fclose(file1);
	fclose(file2);
	return 0;
}