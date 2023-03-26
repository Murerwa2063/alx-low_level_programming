#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line.
 * @separator: separator string.
 * @n: number of strings.
 *
 * Return: string followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
	char *str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && x != n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(args);
}
