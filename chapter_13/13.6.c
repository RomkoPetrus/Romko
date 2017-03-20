//13.6 Stephen Prata
/*Rewrite the program in  Listing   13.2    so that, instead of using command-line 
arguments, it prompts the user for the required information.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 81

int get_str(char * ar){
	int count = 0;
	int ch;
	while ((ch = getchar()) != '\n' && count < LEN - 1){
		ar[count] = ch;		
		count++;
	}
	if ((ch == '\n') || count == LEN - 1)
		ar[count] = '\0';
	return count;
}

int main(void) {	
	FILE * in, * out;
	int len;
	int count = 0;
	char name[LEN];		

	puts("Type a file name: ");	
	len = get_str(name);

	if ((in = fopen(name, "r")) == NULL) {
		fprintf(stderr, "Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}	
	char name_new[len + 5];
	strncpy(name_new, name, len);
	name_new[len] = '\0';
	strcat(name_new, ".red");
	if ((out = fopen(name_new, "w")) == NULL) {
		fprintf(stderr, "Can't create output file %s\n", name_new);
		exit(3);
	}
	while ((len = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(len, out);
	if (fclose(in) != 0 || fclose(out) != 0)
		fputs("Error in cljsing files\n", stderr);
	return 0;
}