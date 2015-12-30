/* Rewrite the temperature conversion program of 
	Section 1.2 to use a function for conversion.
*/

#include <stdio.h>

float FtoC(float f)
{
	float c;
	c = (5.0/ 9.0) * (f - 32);
	return c;
}

float CtoF(float c)
{
	float f;
	f = (9.0 / 5.0) * c + 32;
	return f;

}
int main(void)
{
	float fahr, cels;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahr Cels\n");
	printf("---- ----\n");

	while (fahr <= upper)
	{
		cels = FtoC(fahr);
		printf("%3.0f %6.1f\n", fahr, cels);
		fahr = fahr + step;
	}
	
	return 0;
}
