#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line.
 * @n: numbers
 * @separator: string
 * Return: numbers followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));

	if (separator != NULL && x < n - 1)
	{
		printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}

