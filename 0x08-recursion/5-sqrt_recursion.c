#include "main.h"
/*This is the actual square root function to be called in the task's code*/
int sqt_rec(int i, int n);
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
	else
	{
		return (sqt_rec(n, 0));
	}
/**
 * sqt_rec - finds the square root of an natural number.
 * @n: number to be checked for square root.
 * @i: iterator.
 * Return: square root of n.
 */
int sqt_rec(int i, int n)
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
