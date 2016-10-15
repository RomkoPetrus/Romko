#include <stdio.h>
const float F = 30.48;
int main(void){
	float height, in;
	int feet;	
	printf("%s\n", "Enter a height in centimeters: ");
	scanf("%f", &height);
	while (height > 0){
		feet = height / F;
		in = (height / F - feet) * 12;
		printf("%.1f cm = %d feet, %.2f inches\n", height, feet, in);
		printf("%s\n", "Enter a different height in centimeters (<=0 to quit): ");
		scanf("%f", &height);
	}		
	printf("Thenk you!");
	return 0;
}
