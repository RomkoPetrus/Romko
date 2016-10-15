#include <stdio.h>
#define INVESTS 100
int main(void){	
	float Daphne = INVESTS;
	float Deirdre = INVESTS;
	for (int i = 0; 1 ; ++i){
		Daphne += INVESTS*0.1;
		Deirdre += Deirdre*0.05;
		if (Deirdre >= Daphne){
			printf("Years\t Daphne\t Deirdre\n");
			printf("%d\t %.2f\t %.2f\n", i, Daphne, Deirdre);
			break;
		}		
	}		
	return 0;
}