/* Write a loop equivalent to the for loop *above
	without using && or ||.
*/

// for (i = 0; i < lim - 1 && (c = getchar() != EOF && c != '\n'; ++i)

#include <stdio.h>

#define lim 100

int main(void)
{
	int c, i = 0;
	char s[lim];

	while (i < lim - 1)
	{
		if ((c = getchar()) != '\n')
		{
			if (c != EOF)
			{
				s[i] = c;
			}
		}
		i++;
	}
	return 0;
}
