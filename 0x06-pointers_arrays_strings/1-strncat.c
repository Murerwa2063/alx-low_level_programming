#include "main.h"
/**
 * *_strncat - a function that concatenates two strings
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;
		/* j is a counter for  n bytes of src to be concatenated */
		/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
