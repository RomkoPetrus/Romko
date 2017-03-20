//13.8 Stephen Prata
/*Modify the program in Listing 13.3 so that each word is numbered according to the order 
in which it was added to the list, starting with 1. Make sure that, when the program is 
run a second time, new word numbering resumes where the previous numbering left off.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int counting(FILE * file, char * array);
  
int main(void){
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy", "a+")) == NULL) {
        fprintf(stdout,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");

    while ((fscanf(stdin,"%40s", words) == 1)  && (words[0] != '#'))    	
        fprintf(fp, "%s\n", words);    
    
    puts("File contents:");
    rewind(fp);           /* go back to beginning of file */
    printf("File has %u words.\n", counting(fp, words));
    puts("\nDone!");
    
    if (fclose(fp) != 0)
        fprintf(stderr,"Error closing file\n");  
    return 0;
}

int counting(FILE * file, char * array){
	unsigned int n = 0;
	while (fscanf(file, "%s", array) == 1)		
		printf("%u - %s\n", ++n, array);
	return n;
}