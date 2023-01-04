#include "main.h"
/**
 * _strspn - fetches the length of a prefix substring
 *
 * @s: the string to search in
 * @accept: characters to search for in the string s
 *
 * Return:number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
	char *a = accept;

	while (*a != '\0' && *a != *s)
	{
		a++;
	}
	if (*a == '\0')
	{
	break;
	}
	count++;
	s++;
	}
	return (count);
}
