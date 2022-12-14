#include "main.h"
/**
 * times_table - prints 9 times table, starting with 0. main function
 *
 * Return:
 */
void times_table(void)
{
	int i;
	int b;

	for (i = 0; i <= 9; i++)
	{
		for (b = 0; b <= 9; b++)
		{
			int prod = b * i;

			if (b == 0)
																								{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
