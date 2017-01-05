#include <stdio.h>

void printFlags(const int argc, char const *argv[]){	
	for (int i = argc - 1; i > 0; --i) printf("%s ", argv[i]);	
}

int main(const int argc, char const *argv[]){
	if (argc > 1) printFlags(argc, argv);	
	return 0;
}