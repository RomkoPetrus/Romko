#include <stdio.h>
const short H = 10;
int main(void)
{
	int min=0, x=0;
	printf("enter the integer number \n");
	scanf("%d", &min);
	while (x++ < H)		
		printf("%d\n", min+x);			
	printf("Thenk you!");
	return 0;
}