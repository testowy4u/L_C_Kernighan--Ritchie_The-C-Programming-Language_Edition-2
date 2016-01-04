/* Revise the main routine of the longest-line program so
	it will correctly print the length of arbitrarily 
	long input lines, and as much aas possible of the text
*/

#include <stdio.h>
#define MAXLINE 1000


int main(void)
{	// print the longest input line
	
	int ourgetline(char s[], int lim);
	void ourcopy(char to[], char from[]);

	int len;							// current line length
	int max;							// maximum lenght seen so far
	
	char line[MAXLINE];					// current input line
	char longest[MAXLINE];				// longest line saved here

	max = 0;

	while ((len = ourgetline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			ourcopy(longest, line);
		}
	}

	if (max > 0)
	{
		printf("%s", longest);
		printf("%d\n", max);
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


void ourcopy(char to[], char from[])
{	// copy 'from into 'to'; assume to is big enough
	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}
