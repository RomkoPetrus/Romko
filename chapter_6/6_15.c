#include <stdio.h>
#include <string.h>
#define MAX 255
char array[MAX];
int main(void){	
	int i;
	for (i = 0; i < MAX; ++i){
		scanf("%c", &array[i]);
		if(array[i]=='\n'){
			array[i]='\0';
			break;
		}
	}		
	for (int j = i-1; j >= 0; --j)
		printf("%c", array[j]);
	return 0;
}