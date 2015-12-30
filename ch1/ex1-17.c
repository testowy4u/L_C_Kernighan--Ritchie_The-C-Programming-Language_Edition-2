/* Write a program to print all input lines 
	that are longer than 80 characters
*/

#include <stdio.h>
	
#define MAXLINE 1000
#define MINLINE 81


int main(void)
{	// print the longest input line
	
	int ourgetline(char s[], int lim);

	int len;							// current line length	
	char line[MAXLINE];					// current input line

	while ((len = ourgetline(line, MAXLINE)) > 0)
	{
		if (len > MINLINE)
		{
			printf("%s", line);
		}
	}

	return 0;
}


int ourgetline(char s[], int lim)
{	// read a line into s, return length
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	else if (c == EOF && i > 0)
	{
		s[i] = '\n';
		++i;
	}

	s[i] = '\0';

	return i;
}
