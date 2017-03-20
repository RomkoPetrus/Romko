//13.1 St.Prata
/*Modify Listing 13.1 so that it solicits the user to enter the filename and
reads the user’s response instead of using command-line arguments.*/
#include <stdio.h>
#include <stdlib.h>
#define LEN 20

void st_gets(char *string, int n);

int main(void) {  
    int ch;
    char f_name[LEN];
    FILE *fp;
    unsigned long count = 0;   
    

    puts("Enter filename");
    st_gets(f_name, LEN);
    //scanf("%20s", f_name);        
    
    if ((fp = fopen(f_name, "r")) == NULL) {
        printf("Can't open %s\n", f_name);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", f_name, count);

    return 0;
}     

void st_gets(char *string, int n){
 
	fgets(string, LEN, stdin); 
	while (*string != '\0'){
		if (*string == '\n'){ 
			*string = '\0';
			break;
		}			
		string++;
	}	
}