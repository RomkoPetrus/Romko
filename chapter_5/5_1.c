#include <stdio.h>
const short H = 60;
int main(void)
{
	int min=0;
	puts("program for conversion of minutes in an hour");
	puts("enter the number of minutes");
	scanf("%d", &min);
	while (min > 0){
		printf("%d minutes equals %d hours and %d minutes\n", min, min/H, min%H);
		printf("%s\n", "enter a different number of minutes");
		scanf("%d", &min);
	}		
	puts("Thenk you!");
	return 0;
}