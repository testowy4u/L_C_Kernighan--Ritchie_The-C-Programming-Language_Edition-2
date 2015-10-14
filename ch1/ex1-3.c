/* Modify the temperature conversion program to print a heading above the table
*/

#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */

int main(void)
{
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahr Clesius\n");
	printf("---- -------\n");

	fahr = lower;
	while (fahr <= upper)
	{
		cels = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, cels);
		fahr = fahr + step;
	}

	return 0;
}