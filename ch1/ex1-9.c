/* Write a program to copy its unput to its output, replacing each 
	string of one or more blanks by a single blank.
*/
#include <stdio.h>
#define NONBLANK 'a'

int main(void)
{
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (lastc!=' ')
				putchar(c);
		}
		else
			putchar(c);
		lastc = c;
	}

	return 0;
}