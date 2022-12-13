#include <stdio.h>
/**
 * main - Start point
 * Return:
 * 0 (success)
 * 1 if an errror occurred
 */

int main(void)
{
	int a = 10
;
	for (; a < 20; a++)
	{
		putchar((a % 10) + '0');
		if (a != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
