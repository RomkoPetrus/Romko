#include <stdio.h>
#include <string.h>
#include "11_11.h"

void * input (char (*st)[MAX]){
	for (int i = 0; i < STR; ++i){
		short temp, j;
		for (j = 0; j < MAX - 1 && (temp = getchar()) != EOF && temp != '\n'; ++j)			
			st[i][j] = temp;
		if (temp == EOF && j == 0) return;
		if (j == MAX-1)
			while (getchar() != '\n') continue;
	}
}

void menu (void){
	puts("\nChoose from five options:");
	puts("1. Print the original list of strings");
	puts("2. Print the strings in ASCII collating sequence");
	puts("3. Print the strings in order of increasing length");
	puts("4. Print the strings in order of the length of the first word in the string");
	puts("5. Quit");
}

void sort(char(*st)[MAX], int *ar) {
	int temp, data;
	for (int i = 0; i < STR; i++){
		data = ar[0];
		temp = 0;
		for (int j = 1; j < STR; j++){
			if (data > ar[j]) {
				data = ar[j];
				temp = j;
			}
		}
		if (ar[temp] != '\0') //not print the blank lines
			puts(st[temp]); //print min line
		ar[temp] = 1000; //mark lines used
	}
}
