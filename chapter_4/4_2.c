#include <stdio.h>
#include <string.h>
int main(void){
	char first[20];
	printf("%s\n", "Please, input Your first name");
	scanf("%s", first);
	printf("\"%s\"\n", first);
	printf("\"%20s\"\n", first);
	printf("\"%-20s\"\n", first);
	printf("%*s\n", (strlen(first)+3), first);
	return 0;
}




