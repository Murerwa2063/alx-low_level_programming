#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - find the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 *
 * Return: the largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	if (n == 1)
	{
		return (2);
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	if (n > 2)
	{
		return (n);
	}
	return (i);
}

/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	printf("%ld\n", largest_prime_factor(612852475143));
	return (0);
}
