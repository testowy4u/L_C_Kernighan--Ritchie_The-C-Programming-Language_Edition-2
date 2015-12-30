#include <stdio.h>

#define MAXWORDLEN 10
#define IN			1
#define OUT			0

int main(void)
{
	int c = EOF;
	int i = 0;
	int j = 0;
	long len_array[MAXWORDLEN + 1];
	int state = IN;
	int nc = 0;

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

	for (i = 0; i <= MAXWORDLEN; ++i)				// create histogram
	{
		if (i <= 9)
			printf("| %2d| ", i + 1);				// print word count
		
		else if (i > 9)
			printf("|>%d| ", MAXWORDLEN);
		
		for (j = 0; j < len_array[i]; ++j)			// add to graph rows
			putchar('*');
		
		putchar('\n');
	}

	return 0;
}
