//13.14 Stephen Prata
/*Digital images, particularly those radioed back from spacecraft, may have glitches. Add 
a de-glitching function to programming exercise 12. It should compare each value to its 
immediate neighbors to the left and right, above and below. If the value differs by more 
than 1 from each of its neighbors, replace the value with the average of the neighboring 
values. You should round the average to the nearest integer value. Note that the points 
along the boundaries have fewer than four neighbors, so they require special handling.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30

void glitche(int (*data)[COLS], char (*gif)[COLS+1]);

int main(void) {	
	FILE * file1;
	int array[ROWS][COLS];
	int arnew[ROWS][COLS];

	char picture[ROWS][COLS + 1];	
	int a, b, c, d, i, j;
	int neighbors;
	
	if ((file1 = fopen("Films.txt", "r")) == NULL) {
		fputs("Can't open Films.txt\n", stderr);
		exit(EXIT_FAILURE);
	}	
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLS; ++j) {			
			if(fscanf(file1, "%d", &array[i][j]) != 1){
				fputs("Invalid file (Films.txt)", stderr);
				exit(EXIT_FAILURE);
			}
		}
	}
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLS; ++j) {
			if (i == 0) 
				c = 0;
			else
				c = (array[i][j] - array[i - 1][j]);
			if (i == ROWS-1) 
				d = 0;
			else
				d = (array[i][j] - array[i + 1][j]);
			if (j == 0) 
				a = 0;
			else
				a = (array[i][j] - array[i][j - 1]);
			if (j == COLS-1) 
				b = 0;
			else
				b = (array[i][j] - array[i][j + 1]);

			if (abs(a) > 1 || abs(b) > 1 || abs(c) > 1 || abs(d) > 1){
				if (i > 0 && i < ROWS-1 && j > 0 && j < COLS-1)
					neighbors = 4;
				else if ((i == 0 && j == 0) || (i == 0 && j == COLS - 1) || (i == ROWS - 1 && j == 0) || (i == ROWS - 1 && j == COLS - 1))
					neighbors = 2;
				else
					neighbors = 3;
				arnew[i][j] = (neighbors*array[i][j] - (a + b + c + d)) / neighbors;
			}
			else
				arnew[i][j] = array[i][j];		
		}	
	}
	puts("");
	fclose(file1);
	glitche(array, picture);
	glitche(arnew, picture);	
	return 0;
}

void glitche(int (*data)[30], char (*gif)[31]){
	FILE *file2;
	int i, j;

	if ((file2 = fopen("s", "w")) == NULL) {
		fputs("Can't open s\n", stderr);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLS; ++j) {
			switch(data[i][j]){
				case 0:
					gif[i][j] = ' ';
					break;
				case 1:
					gif[i][j] = '.';
					break;
				case 2:
					gif[i][j] = '\'';
					break;
				case 3:
					gif[i][j] = ':';
					break;
				case 4:
					gif[i][j] = '~';
					break;
				case 5:
					gif[i][j] = '*';
					break;
				case 6:
					gif[i][j] = '=';
					break;
				case 7:
					gif[i][j] = '%';
					break;
				case 8:
					gif[i][j] = '#';
					break;
				case 9:
					gif[i][j] = '@';
					break;
				default:
					gif[i][j] = '0';
			}			
		}
		gif[i][j] = '\0';
		puts(gif[i]);
		fprintf(file2, "%s\n", gif[i]);		
	}
	puts("");
	fclose(file2);
}