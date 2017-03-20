//13.4 St.Prata
/*Write a program that sequentially displays onscreen all the files listed in the command 
line. Use  argc  to control a loop.*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 81

int main(int argc, char const *argv[]) {
	FILE * file;
	int ch;
	if (argc == 1) {
		fprintf(stderr, "Usage: %s file1 file2 ...\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	for (int i = 1; i < argc; ++i) {
		if ((file = fopen(argv[i], "r")) == NULL) {
			fprintf(stderr, "Can't open %s \n", argv[i]);
			exit(EXIT_FAILURE);
		}
		while ((ch = getc(file)) != EOF){			
			putchar(ch);					
		}
		fclose(file);
		putchar('\n');		
	}			
	return 0;
}