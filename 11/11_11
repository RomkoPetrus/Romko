#include <stdio.h>
#include <string.h>
#include "11_11.h" 

void main(void){
	char strings[STR][MAX] = {'\0'};
	int lenth[MAX] = {0};

	printf ("Please, enter %d strings\n", STR);
	input(*strings);
	
	short ch = 0;
	while (ch != 5) {
		menu();
		scanf("%hi", &ch);
		switch (ch) {
		case 1:
			for (int i = 0; i < STR; i++) {
				if (strings[i][0] == '\0') break;
				puts(strings[i]);
			}
			break;
		case 2:
			for (int i = 0; i < STR; i++) {
				(int) lenth[i] = strings[i][0];				
			}
			sort(strings, lenth);
			break;
		case 3:
			for (int i = 0; i < STR; i++)
				lenth[i] = strlen(strings[i]);
			sort(strings, lenth);
			break;
		case 4:
			for (int i = 0; i < STR; i++){
				short count = 0;
				while (strings[i][count] != ' ' && strings[i][count] != '\0') count++;
				lenth[i] = count;				
			}
			sort(strings, lenth);
			break;
		default:
			puts("Pleace, input 1, 2, 3, 4 or 5");
		}		
	}	
}
