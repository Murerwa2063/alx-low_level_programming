#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * to by s with the constant byte b
 * @n: number of bytes to fill
 * @s: pointer to memory area to be filled
 * @b: constant byte to fill memory area with
 *
 * Reurn: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}

	return (s);
}
