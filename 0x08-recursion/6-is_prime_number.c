#include "main.h"
/**
 * is_prime_number - checks for prime number.
 * @n: integer to be checked.
 * Return: 1 if n is prime
 * 0 if not.
 */

int is_prime_number(int n)
{
	int x;

	/* 0 and 1 are not prime numbers*/
	if (n < 2)
	{
		return (0);
	}

	for (x = 2; x * x <= n; x++)
	{
		if (n % x == 0)
		{
			return (0);
		}
	}
	return (1);
}
