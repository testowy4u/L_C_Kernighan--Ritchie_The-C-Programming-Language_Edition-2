/* Write a program entab that replaces strings of blanks by
	the minumum number of tabs and blanks to achieve the same
	spacing. Use the same tab stops as for detab. When either
	a tab or a single blank would suffice to reach a tab stop,
	which should be given preference?
*/

#include <stdio.h>

#define TABWIDTH 5

int main(void)
{
	int p = 0;
	int blanks = 0;
	char chunk[TABWIDTH + 2];
	int c;

	while ((c = getchar()) !=  EOF)
	{
		chunk[p++] = c;
		if (c == ' ')
		{
			++blanks;
		}
		else
		{
			blanks = 0;
		}

		if (p == TABWIDTH || c == '\n')
		{
			chunk[p] = '\0';
			
			if(blanks > 1)
			{
				p = p - blanks;
				chunk[p] = '\t';
				chunk[p + 1] = '\0';
			}

			printf("%s", chunk);
			p = blanks = 0;
		}
	}
	if (p > 0) 
	{
		chunk[p] = '\0';
		printf("%s", chunk);
	}

	return 0;
}
