/* Write a program to print the corresponding Celsius to Fahreheit table
*/

#include <stdio.h>

/* print Celsius-Fahrenheit table
	for cels = 0, 20, ..., 300; floating-point version */

int main(void)
{
	float cels, fahr;
	int upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Cels Fahrenheit\n");
	printf("---- ----------\n");
	
	cels = lower;
	while (cels <= upper)
	{
		fahr = (9.0 / 5.0) * cels + 32.0;
		printf("%3.0f %6.1f\n", cels, fahr);
		cels = cels + step;
	}

	return 0;
}