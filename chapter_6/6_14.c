#include <stdio.h>
#define MAX 8
void print(double a[MAX]);
double array1[MAX];
double array2[MAX];

int main(void){	
	for (int i = 0; i < MAX; ++i)
		scanf("%lf", &array1[i]);
	array2[0] = array1[0];
	for (int j = 1; j < MAX; ++j)
		array2[j] = array2[j-1] + array1[j];
	print(array1);
	print(array2);
	return 0;
}

void print(double a[MAX]){
	for (int k = 0; k < MAX; ++k)
		printf("%0.2lf\t", a[k]);
	puts("");
	return;
}