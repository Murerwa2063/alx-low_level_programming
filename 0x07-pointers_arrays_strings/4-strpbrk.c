#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: string to be searched
 * @accept: characters to search
 *
 * Return:Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *a = accept;

	while (*a != '\0')
	{
	if (*a == *s)
	{
	return (s);
	}
	a++;
	}
	s++;
	}
	return (NULL);
}
