//13.13 Stephen Prata
/*Do Programming Exercise 12, but use variable-length arrays (VLAs) instead of standard arrays.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int rows = 20;
	int cols = 30;
	FILE * file1, *file2;
	int array[rows][cols];
	char picture[rows][cols + 1];
	int i, j;
	
	if ((file1 = fopen("Films.txt", "r")) == NULL) {
		fputs("Can't open Films.txt\n", stderr);
		exit(EXIT_FAILURE);
	}
	if ((file2 = fopen("s", "w")) == NULL) {
		fputs("Can't open s\n", stderr);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {			
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