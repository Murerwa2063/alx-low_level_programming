#include "main.h"
#include <stddef.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 *
 * @s: the string to search
 * @c: character to search for.
 *
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		s++;
		else
		return (s);
	}
	if (c == '\0')
	return (s);

	return (NULL);
}
