#include <stdio.h>
const short H = 7;
int main(void){
	int days=0;	
	printf("%s\n", "enter the number of days");
	scanf("%d", &days);
	while (days > 0){
		printf("%d days are %d weeks, %d days\n", days, days/H, days%H);
		printf("%s\n", "enter a different number of days");
		scanf("%d", &days);
	}		
	printf("Thenk you!");
	return 0;
}