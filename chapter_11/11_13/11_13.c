/*
Chapter 11 Exercise 13:
Write a program that echoes the command-line arguments in reverse word order. 
That is, if the command-line arguments are see you later, the program should print later you see.
*/


#include <stdio.h>

void printFlags(const int argc, char const *argv[]){	
	for (int i = argc - 1; i > 0; --i) printf("%s ", argv[i]);	
}

int main(const int argc, char const *argv[]){
	if (argc > 1) printFlags(argc, argv);	
	return 0;
}