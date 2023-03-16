#include "main.h"
/**
 * sqt_rec - finds the square root of an natural number.
 * @n: number to be checked for square root.
 * @i: iterator.
 * Return: square root of n.
 */
int sqt_rec(int i, int n)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqt_rec(n, i + 1));
}
