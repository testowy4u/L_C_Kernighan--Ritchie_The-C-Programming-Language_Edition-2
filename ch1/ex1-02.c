/* Experiment to find out what happens when printf's argument string
	contains \c, where c is some character not listed above
*/
#include <stdio.h>

int main(void)
{
	printf("Hello,\t world\n");

	return 0;
}