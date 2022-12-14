#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints last digit. Entry point and main function
 * @n: integer to get last digit of
 *
 * Return:
 */
int print_last_digit(int n)
{

	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
