/* Write a program to print a histogram of the 
	lengths of words in its input. It is easy to 
	draw the histogram with the bars horizontal, 
	a vertical orientation is more challenging
*/

#include <stdio.h>

#define MAXWORDLEN 10
#define IN			1
#define OUT			0

int main(void)
{
	int c, i, j;
	long len_array[MAXWORDLEN + 1];
	int state = IN;
	int nc = 0;

	int height = 0;

	for (i = 0; i <= MAXWORDLEN; ++i)			// make array for word lengths
		len_array[i] = 0;

	while ((c = getchar()) != EOF)					// read input
	{	
		++nc;

		if (c == ' ' || c == '\t' || c == '\n')		// wordcheck
		{
			state = OUT;
			--nc;
		}
		if (state == OUT)							// once word end
		{
			if (nc != 0 && nc <= MAXWORDLEN)		// if word len 1-10 char
			{
				++len_array[nc - 1];				// add to count
			}
			else if (nc > MAXWORDLEN)
			{
				++len_array[10];
			}
			state = IN;								// reset wordcheck
			nc = 0;
		}
	}

	for (i = 0; i <= MAXWORDLEN; ++i)				// Get height
	{
		if (height <= len_array[i])
			height = len_array[i];
	}

	for (i = height; i > 0; --i)	// Print chart
	{
		printf("%4d |", i);
		
		for (j = 0; j <= MAXWORDLEN; ++j)
		{
			if (len_array[j] >= i)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}

		printf("\n");
	}

	printf("     +");
	
	for (i = 0; i <= MAXWORDLEN; ++i)
	{
		printf("---");
	}

	printf("\n      ");

	for (i = 0; i <= MAXWORDLEN - 1; ++i)
	{
		printf("%2d ", i + 1);
	}
	printf("+%d\n", MAXWORDLEN);
	return 0;
}
