#include <stdio.h>
/**
 * main - srarting point
 * Return:
 * 0 (success)
 * non-zero if an errror occurred
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
