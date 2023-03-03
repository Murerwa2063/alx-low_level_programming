#include "main.h"
/**
 * reverse_array - revereses an array.
 * @a: pointer to the array.
 * @n: number of elements of the array to be reversed.
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int ctr;
	int temp;

	n = n - 1;
	ctr = 0;
	while (ctr <= n)
		{
			temp = a[ctr];
			a[ctr++] = a[n];
			a[n--] = temp;
		}
}
