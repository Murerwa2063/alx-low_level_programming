#include "main.h"
#include <stdio.h>
/**
 * _isupper - main function. Checks for uppercase character
 *
 * @c: Character to be compared
 *
 * Return:
 * 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
