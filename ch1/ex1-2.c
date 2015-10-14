/* Experiment to find out what happens when printf's argument string contains
	/c, where c is some character not listed above */


#include <stdio.h>

int main(void)
{
	printf("Hello, ");
	printf("world");
	printf("\n");
	// printf("\c") 	// The escape character /c is not in the standard library

	return 0;
}