//13.2 St.Prata
/*Write a file-copy program that takes the original filename and the copy file from the 
command line. Use standard I/O and the binary mode, if possible*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 256

int ch;
FILE * f_origin, * f_copy;

int main(int argc, char const *argv[]) {
	if (argc < 3) {
		fprintf(stderr, "Usage %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if (argc > 3) {
		printf("Too many arguments\n");
	}

	if ((f_origin = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s \n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((f_copy = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s \n", argv[2]);
		exit(EXIT_FAILURE);
	}
	
	while ((ch = getc(f_origin)) != EOF){			
		putchar(ch);
		putc(ch, f_copy);		
	}

	fclose(f_origin);
	fclose(f_copy);

	return 0;
}