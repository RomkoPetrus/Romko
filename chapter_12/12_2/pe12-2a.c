#include <stdio.h>

static float distance;
static float fuel;
static short mode;

void set_mode(int new_mode){
	if (new_mode == 0 || new_mode == 1)
		mode = new_mode;		 
	else{
		printf("Invalid mode specified. Mode %hd %s used.\n",
		mode, mode == 0 ? "(EC)" : "(US)");
	}
}

void get_info(void){	
	printf("Enter distance traveled in %s: ", mode == 0 ? "kilometers" : "miles"); 
	scanf("%f", &distance); 
	printf("Enter fuel consumed in %s: ", mode == 0 ? "liters" : "gallons");
	scanf("%f", &fuel);	
}

void show_info(void){
	if (mode == 0)
		printf("Fuel consumption is %.1f liters per 100 km.\n",	fuel * 100 / distance);
	else
		printf("Fuel consumption is %.1f miles per gallon.\n",	distance / fuel);
}