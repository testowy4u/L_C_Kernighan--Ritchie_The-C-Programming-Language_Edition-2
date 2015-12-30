/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main(void)
{
	int c, sp, tb, nl;

	sp = 0;
	tb = 0;
	nl = 0;

	while ((c = getchar()) != EOF)
	{
		if 		(c == ' ')
			++sp;
		else if (c == '\t')
			++tb;
		else if (c == '\n')
			++nl;
	}
	
	printf("Spaces: %d\nTabs: %d\nLines %d\n", sp, tb, nl);

	return 0;
}
