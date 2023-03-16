#include "main.h"
int _sqt_rec(int i, int n);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be checked.
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqt_rec(n, 0));
}
/**
 * _sqt_rec - calculates actual square root of n.
 * @n: number to be considered.
 * @i: iterator.
 * Return: Square root of n.
 */
int _sqt_rec(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqt_rec(n, i + 1));
	}
}
