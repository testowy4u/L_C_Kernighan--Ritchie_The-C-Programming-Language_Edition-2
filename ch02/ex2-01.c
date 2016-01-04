/* Write a program to determin the ranges of char, short, int
	and long variables both signed and unsigned, by printing
	appropriate values from standard headers and by direct
	computation. Harder if you compute them: determine the
	ranges of various floating-point types.
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("\nBits of type char: %d \n\n", CHAR_BIT);

	printf("Maximum value of type char: %d\n", CHAR_MAX);
	printf("Minimum value of type char: %d\n\n", CHAR_MIN);

	printf("Maximum value of type singed char: %d\n", SCHAR_MAX);
	printf("Minimum value of type singed char: %d\n\n", SCHAR_MIN);

	printf("Maximum value of type unsigned char: %u\n\n", (unsigned) UCHAR_MAX);

	printf("Maximum value of type short: %d\n", SHRT_MAX);
	printf("Minimum value of type short: %d\n\n", SHRT_MIN);

	printf("Maximum value of type unsigned short: %d\n\n", USHRT_MAX);

	printf("Maximum value of type int: %d\n", INT_MAX);
	printf("Minimum value of type int: %d\n\n", INT_MIN);

	printf("Maximum value of type unsigned int: %u\n\n", UINT_MAX);

	printf("Maximum value of type long: %ld\n", LONG_MAX);
	printf("Minimum value of type long: %ld\n\n", LONG_MIN);

	printf("Maximum value of type unsigned long: %lu\n\n", ULONG_MAX);

	printf("Maximum value of type long long: %lld\n", LLONG_MAX);
	printf("Minimum value of type long long: %lld\n\n", LLONG_MIN);

	printf("Maximum value of type unsigned long long: %llu\n\n", ULLONG_MAX);


	return 0;
}
