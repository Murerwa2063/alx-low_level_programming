#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
	_putchar("%s", s[i]);
	}
	_putchar("\n");
}
