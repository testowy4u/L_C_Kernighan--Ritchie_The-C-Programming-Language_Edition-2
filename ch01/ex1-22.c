/* Write a program to "fold" long input lines into two or more shorter
	lines after the last non-blank character that occurs before the
	n-th column of input. Make sure your program does something
	intelligent with very long lines, and if there are no blanks or
	tabs before the specified column.
*/

#include <stdio.h>

#define MAXLINE 1000
#define LINEFOLD 10

char line[MAXLINE + 1];
char fold_segment[MAXLINE + 1];


int ourgetline(void)
{
	int c, i;

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}

	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	else if (c == EOF && i > 0)
	{
		line[i] = '\n';
		++i;
	}

	line[i] = '\0';

	return i;
}


int main(void)
{
	int ourgetline(void);
	int space_spot, f_move, col, lapse;
	int len;
	int last_space;

	while ((len = ourgetline()) > 0)
	{
		while (len) 
		{
			if (len > LINEFOLD)
			{
				last_space = LINEFOLD - 1;
				
				for (space_spot = LINEFOLD - 1; space_spot > 0; space_spot--)
				{
					if (line[space_spot] == ' ')
					{
						last_space = space_spot;
						break;
					}
				}
				
				for (f_move = 0; f_move <= last_space; ++f_move)
				{
					fold_segment[f_move] = line[f_move];
				}
			
				fold_segment[f_move] = '\0';
				puts(fold_segment);

				for (col = 0, lapse = f_move; lapse <= len; ++col, ++lapse)
				{
					line[col] = line[lapse];
				}

				len -= last_space;
			}
			else
			{
				int l;
				for (l = 0; line[l] != '\0'; l++)
					;
				if (l > 0)
				{
					puts(line);
				}

				len = 0;
			}
		}
	}
}
