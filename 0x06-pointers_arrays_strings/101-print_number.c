#include "main.h"
/**
 * print_number - prints an integer.
 * noarrays and pointers.
 * @n: integer to be printed.
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;
		/*check negative number*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
		/* print number in recursion*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
