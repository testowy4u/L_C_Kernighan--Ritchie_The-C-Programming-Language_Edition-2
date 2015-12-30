/* Write a program to copy its input to its output, replacing each
	tab by \t, each backspace by \b, and each backslash by \\.
	This makes tabs, backspaces visible in an inambiguous way.
*/
	
#include <stdio.h>

int main(void)
{
	int c, d;

	while ((c = getchar()) != EOF)
	{
		d = 0;
		if 		(c == '\\')
		{
			putchar('\\');
			putchar('\\');
			d = 1;
		}
		else if (c == '\t')
		{
			putchar('\\');
			putchar('t');
			d = 1;
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
			d = 1;
		}
		else if (d == 0)
			putchar(c);
	}

	return 0;
}
