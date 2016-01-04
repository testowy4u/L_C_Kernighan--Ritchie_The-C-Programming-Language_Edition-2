/* Write an alternative version of squeeze(s1, s2) that deletes
	each character in the string s1 that matches any character
	in the string s2
*/

#include <stdio.h>
#include <string.h>


void squeeze(char s1[], char s2[])
{
	int i, j, k;

	for (k = 0; s2[k] != '\0'; k++)
	{
		for (i = j = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[k])
			{
				s1[j++] = s1[i];
			}
		}
		s1[j] = '\0';
	}
}


int main(void)
{
 	void squeeze(char s1[], char s2[]);
 	char string1[] = "abcd";
 	char string2[] = "efgh";
 	char string3[] = "gefd";

 	squeeze(string1, string3);
 	printf("%s\n", string1);

 	squeeze(string2, string3);
 	printf("%s\n", string2);

 	return 0;
}

// void squeeze(char s[], int c)
// {
// 	int i, j;

// 	for (i = j = 0; s[i] != '\0'; i++)
// 		if (s[i] != c)
// 			s[j++] = s[i];
// 		s[j] = '\0'
// }