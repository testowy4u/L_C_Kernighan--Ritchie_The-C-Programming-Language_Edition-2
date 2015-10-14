/* Run the "hello world" program on your system. Experiment with leaving out
	parts of the program, to see what error message you get */

#include <stdio.h>				// include information about standard library

int main(void)					// def a function named main that recieves 
{								// no argument values
	printf("Hello, world\n");	// main calls library function printf
								// to print the sequence of characters;
	return 0;					// \n represents the newline character					
}