#include <stdio.h>

void set_mode(int * mode, int * new_mode){	
	
	if (*new_mode == 0 || *new_mode == 1)
		*mode = *new_mode;		 
	else{		
		printf("Invalid mode specified. Mode %hd %s used.\n",
		*mode, *mode == 0 ? "(EC)" : "(US)");
	}
}

float get_info(int mode){
	float distance;
	float fuel;
	float efficiency;

	printf("Enter distance traveled in %s: ", mode == 0 ? "kilometers" : "miles"); 
	scanf("%f", &distance); 
	printf("Enter fuel consumed in %s: ", mode == 0 ? "liters" : "gallons");
	scanf("%f", &fuel);
	efficiency = mode == 0 ? (fuel * 100 / distance) : (distance / fuel);
	return efficiency;
}


void show_info(int mode, float efi){
	if (mode == 0)
		printf("Fuel consumption is %.1f liters per 100 km.\n",	efi);
	else
		printf("Fuel consumption is %.1f miles per gallon.\n",	efi);
}