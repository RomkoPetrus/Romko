#include <stdio.h>
#include <math.h>
#define MAX 8
int array[MAX];
int p = 1;
int j = 0;
int main(void){	
	for (int i = 0; i < MAX; ++i, p *= 2)
		array[i]=p;	
	do
		printf("%d\n", array[j++]);
	while(j < MAX);
	return 0;
}