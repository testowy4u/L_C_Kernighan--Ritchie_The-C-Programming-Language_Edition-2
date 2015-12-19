#include <stdio.h>

/* print Fahrenhiet-Celsius table 
	for fahr = 0, 20, .., 300 */

main()
{
	int fahr, cels;
	int lower, upper, step;

	lower = 0;		// lower limit of termerature table
	upper = 300;	// upper limit
	step = 20;		// step size

	fahr = lower;

	while (fahr <= upper) {
		cels = 5 * (fahr -  32) / 9;
		printf("%d\t%d\n" , fahr, cels);
		fahr = fahr + step;
	}
}