#include <stdio.h>
#include "main.h"
#include "6-abs.c"
/**
 * print_to_98 - prints all natural numbers up to 98
 * @n: natural number <= 98
 * Return:
 */

void print_to_98(int n)
{
		int i;

		if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf(", ");
				}
			}
		} else
		{
			for (i = n; i <= 98; i++)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
}
