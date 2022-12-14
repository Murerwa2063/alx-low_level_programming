#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 * followed by a new line.
 *
 * Return: Always 0;
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}
}
