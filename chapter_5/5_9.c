
#include <stdio.h>
double Fahren, Celsius, Kelvin; 
void Temperatures(double);
int main(void){		
	printf("This program transfer degrees Fahrenheit to Celsius and Kelvin.\n");
	printf("Enter degrees Fahrenheit: ");
	while(scanf("%lf", &Fahren) == 1){
		Temperatures(Fahren);
		printf("Enter degrees Fahrenheit (q to quit): ");		
	}	
	return 0; 
}

void Temperatures(double Fahren){
	const double C = 5.0/9.0;
	const short F = 32;
	const double K = 273.15;
	double Celsius, Kelvin;
	Celsius = C * (Fahren - F);
	Kelvin = Celsius + K;
	printf("%0.2lfF = %0.2lfC = %0.2lfK\n", Fahren, Celsius, Kelvin);
	return;
} 