#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns a sum of all its params.
 * @n: known parameter
 * @...: unknown param.
 * Return: sum of all params
 * 0 if n is zero.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
