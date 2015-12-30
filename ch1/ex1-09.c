/* write a program to copy its input to its output, replacing 
	each string of one or more blanks by a single blank
*/

#include <stdio.h>

int main(void)
{
	int c, pc;

	pc = EOF;

	while ((c = getchar()) != EOF) 
	{
		if (c == ' ')
		{
			if (pc != ' ')
			{
				putchar(c);
			}
		}

		if (c != ' ')
			putchar(c);
		pc = c;
	}

	return 0;
}
