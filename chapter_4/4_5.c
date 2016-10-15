#include <stdio.h>
int main(void){	
	float speed, size, t;
	int t1;
	printf("Please, input the download speed in megabits per second (Mbs)\n" 
			" and the size of a file in megabytes (MB): ");
	scanf("%f %f", &speed, &size);
	t = (size * 8) / speed;

	if(t > 60){
		t1 = t / 60;
		t = t - t1 * 60;
		printf("At %0.2f (Mbs), a file of %0.2f (MB) downloads in %d min %0.2f seconds.", speed, size, t1, t);
	}
	else 
	printf("At %0.2f (Mbs), a file of %0.2f (MB) downloads in %0.2f seconds.", speed, size, t);
	return 0;
}




