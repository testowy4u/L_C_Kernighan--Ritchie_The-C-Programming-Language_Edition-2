/* Write the function any(s1, s2), which returns the first
	location in the string s1 where any character from the
	string s2 occurs, or -1 if s1 contains no characters
	from s2.
*/

#include <stdio.h>

int any(char s1[], char s2[])
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
				return i;
		}
	}
	return -1;
}

int main(void)
{
	char string1[4] = "abcd";
	char string2[4] = "efgz";
	char string3[4] = "gefd";

	printf("%i\n", any(string1, string2));
	printf("%i\n", any(string2, string3));
	printf("%i\n", any(string1, string3));

	return 0;
}
