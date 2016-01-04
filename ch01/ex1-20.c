/* Write a program detab that preplaces tabss in the input with
	the nimner of blanks to space to the next tab stop. Assume a fixed
	set of tab stops, say every n columns. Should  be a variable or a
	symbolic parameter
*/

#include <stdio.h>

#define MAXLINE 1000
#define TABWIDTH 5

int main(void)
{
	int c, x, r;
	x = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			putchar(c);
		}
		else if (c == '\t') 
		{
			r = TABWIDTH - x % TABWIDTH;
			while (r-- != 0)
			{
				putchar(' ');
				x++;
			}
		}
		else 
		{
			putchar(c);
			x++;
		}
	}
	return 0;
}

// int ourgetline(char s[], int lim)
// {
// 	int i, c;

// 	for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
// 	{
// 		s[i] = c;
// 	}
// 	if (c == '\n')
// 	{
// 		s[i] = c;
// 		++i;
// 	}
// 	else if (c == EOF && i > 0)
// 	{
// 		s[i] = '\n';
// 		++i;
// 	}

// 	s[i] = '\0';

// 	return i;
// }


// void detab(char to[], char from[])
// {
// 	int i, j, n;
// 	i = j = n = 0;

// 	while ((to[j] = from[i]) != '\0')
// 	{
// 		if (to[j] == '\t')
// 		{
// 			for (n = 0; n < TABWIDTH; ++n, ++j)
// 			{
// 				to[j] = ' ';
// 			}
// 		}
// 		else
// 		{
// 			++j;
// 		}
// 		++i;
// 	}
// }


// int main(void)
// {
// 	int ourgetline(char s[], int lim);
// 	void detab(char to[], char from[]);

// 	int len;
// 	char line[MAXLINE];
// 	char nline[MAXLINE];

// 	while ((len = ourgetline(line, MAXLINE)) > 0)
// 	{
// 		detab(nline, line);
// 		printf("%s", nline);
// 	}

// 	return 0;
// }
