#include "main.h"
/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @n: the number of bytes to be copied
 * @dest: a points to the destination memory area
 * @src: points to the source memory area
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
	*d++ = *s++;
	return (dest);
}
