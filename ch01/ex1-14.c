/* Write a program to print a histogram of the frequencies 
	of different characters in its input
*/

#include <stdio.h>
#define MAX_CHAR 93

int main(void)
{
	long len_array[MAX_CHAR + 1];
	int c, i, j;
	int height = 0;

	for (i = 0; i <= MAX_CHAR; ++i)
	{
		len_array[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (33 <= c && c <= 126)
		{
			++len_array[c - 33];
		}
	}

	for (i = 0; i <= MAX_CHAR; ++i)
	{
		if (height < len_array[i])
		{
			height = len_array[i];
		}
	}

	for (i = height; i > 0; --i)
	{
		printf("%4d |", i);

		for (j = 0; j <= MAX_CHAR; ++j)
		{
			if (len_array[j] >= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("     +");

	for (i = 0; i <= MAX_CHAR; ++i)
	{
		printf("-");
	}

	printf("\n      ");

	for (i = 0; i <= MAX_CHAR; ++i)
	{
		printf("%c", i + 33);
	}

	printf("\n");

	return 0;
}
