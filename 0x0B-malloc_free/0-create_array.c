#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array of chars, initialized with a specific char.
 * @c: specifc char (initializer).
 * @size: size of array
 * Return: char or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arrptr;

	if (size == 0)
	{
		return (NULL);
	}
	arrptr = (char *) malloc(size * sizeof(char));

	if (arrptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		arrptr[x] = c;
	}
	return (arrptr);

	free(arrptr);
}
