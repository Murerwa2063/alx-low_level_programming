#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - prints if a number is positive, negative or zero
 * @i: the number to check
 * Return: void
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i == 0)
	printf("%d is zero\n", i);
	else if (i > 0)
	printf("%d is positive\n", i);
	else
	printf("%d is negative\n", i);
}
