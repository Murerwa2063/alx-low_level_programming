#include <stdio.h>
/**
 * main - Starting point
 *
 * Return:
 * 0 (success)
 * non-zero if an errror ocvurred
 */

int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
	if (i == 'q' || i == 'e')
	{
		continue;
	}
putchar(i);
putchar('\n');

return (0);
}
