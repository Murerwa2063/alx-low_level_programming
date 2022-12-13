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
	if (i == 'e' || i == 'q')
	{
		continue;
	}
putchar(i);
putchar('\n');

return (0);
}
