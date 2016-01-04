/* Write a program to remove trailing blanks and
	tabs from each line of input, and do delete
	entirely blank lines
*/

#include <stdio.h>

#define MAXLINE 1000

int main(void)
{
	int ourgetline(char s[], int lim);
	int len, i;
	char line[MAXLINE], longest[MAXLINE];

	while ((len = ourgetline(line, MAXLINE)) > 0)
	{
		for (i = len - 1; (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'); --i)
			;
		line[++i] = '\n';
		line[++i] = '\0';
		printf("%s", line);
	}

	return 0;
}

int ourgetline(char s[], int lim)
{
	int i, c;

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