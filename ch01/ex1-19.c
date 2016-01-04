/* Write a function reverse(s) that reverses the character
	string s. Use it to write a program that reverses its input
	a line at a time
*/

#include <stdio.h>

#define MAXLINE 1000


int main(void)
{	// print the longest input line
	
	int ourgetline(char s[], int lim);
	void reverseline(char s[]);
	int len;							// current line length	
	char line[MAXLINE];					// current input line

	while ((len = ourgetline(line, MAXLINE)) > 0)
	{
		reverseline(line);
		printf("%s\n", line);
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


void reverseline(char s[])
{
	char temp;
	int i, j;

	for (j = 0; s[j] != '\0'; ++j)
		;
	--j;

	if (s[j] == '\n')
	{
		s[j] = 0;
		--j;
	}

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		--j;
	}
}
