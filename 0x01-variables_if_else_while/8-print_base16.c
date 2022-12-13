#include <stdio.h>
/**
 * main - Starting point
 * Return:
 * 0 (success)
 * non-zefo of an errror occurred
 */

int main(void)
{
	unsigned char c = '0';
	int a;

	for (a = 0; a < 10; a++)
{
	putchar(c);
	c++;
}
c = '1';
for (a = 0; a < 6; a++)
{
	putchar('0' + c);
	c++;
}
putchar('\n');
return (0);
}
