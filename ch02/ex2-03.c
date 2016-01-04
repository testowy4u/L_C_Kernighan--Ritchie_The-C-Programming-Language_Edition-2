/* Write the function htoi(s) which converts a string of
	hexadecimal digits (including an optional 0x or 0X)
	into its equivalent integer value. The allowable 
	digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>

unsigned long htoi(const char s[])
{
	char loweralpha(char c);
	int i = 0;
	unsigned long num = 0;
	char c;

	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
		i = 2;

	while (s[i] != '\0')
	{
		c = loweralpha(s[i]);

		if (c >= 'a' && c <= 'f')
		{
			num = num * 16 + 10 + c - 'a';
		}
		else if (c >= '0' && c <= '9')
		{
			num = num * 16 + c - '0';
		}
		else
			return 0;
		i++;
	}
	return num;
}

char loweralpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return c;
}

int main(void)
{
	unsigned long htoi();

        printf("%lu\n", htoi("0xFA9C"));
        printf("%lu\n", htoi("0xFFFF"));
        printf("%lu\n", htoi("0x1111"));
        printf("%lu\n", htoi("0xBCDA"));
        printf("%lu\n", htoi("BCDA"));


	return 0;
}
