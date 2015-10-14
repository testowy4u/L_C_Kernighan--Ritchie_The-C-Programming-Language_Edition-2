/* Verify that the expression getchar() != EOF is 0 or 1
*/

#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		printf("%d ", c != EOF);
		putchar(c);
	}

	printf("\n%d\n", c != EOF);

	return 0;
}