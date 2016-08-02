#include <stdio.h>
#include <stdbool.h>

char *cities[]={"Moscow", "New-York", "London", "Minsk", "Kiev", "Warsaw", "Berlin", "Tokio", "Hong-Kong"};
int people[]={12197596, 8550405, 8674000, 1959900, 2888000, 1735442, 3563000, 13610000, 7317227};
short size = sizeof cities / sizeof cities[0]; 

// Part 1 "Print of data"
void printCities (char *data1[], int *data2)
{
	for(int i=0; i<size; ++i) 
		printf("%-15s %d\n", data1[i], *(data2+i));	
}

//Part 2 "Sortting of data"
void sortingCities (char *data1[], int *data2)
{
	// Bubble sort
	for (int i = 0; i < size-1; ++i)
	{		
		bool swapped = false;
		for (int j = 0; j < size-1-i; ++j)
		{
			if (data2 [j] < data2 [j+1])
			{
				// Swapped cities 
				char * cities2 [] = {""};
				cities2 [0] = data1 [j];
				data1 [j] = data1 [j+1];
				data1 [j+1] = cities2 [0];

				// Swapped cities 
				int x = data2 [j];
				data2 [j] = data2 [j+1];
				data2 [j+1] = x;
				swapped = true;
			}			
		}	
		// Stopping the cycle if no swapped
		if (!swapped)
			break;	
	}
	printCities (data1, data2);
}

int main(void)
{
	puts ("\nUnsorted data");
	printCities (cities, people);
	
	puts ("\nSorted data");
	sortingCities (cities, people); 	
	return 0;
}
