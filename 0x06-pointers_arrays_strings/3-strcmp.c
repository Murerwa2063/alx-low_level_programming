#include "main.h"
/**
 * *_strcmp - compares two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: 0 if string is less than the other or 1 otherwise.
 * 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	int ctr, compValue;

	ctr = 0;
	while (s1[ctr] == s2[ctr] && s1[ctr] != '\0')
	{
		ctr++;
	}

	compValue = s1[ctr] - s2[ctr];
	return (compValue);
}
