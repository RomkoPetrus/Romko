#include <stdio.h>
#define MAX 8
int array[MAX];
int main(void){	
	puts("Enter eight integers: ");
	for (int i = 0; i < MAX; ++i)
		scanf("%i", &array[i]);
	for (int i = MAX-1; i >= 0; --i)
		printf("%i ", array[i]);			
	return 0;
}