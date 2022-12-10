#include <stdio.h>

/**
 * main - print the size of various types on the computer.
 * The main starting point for the program.
 *
 * Runs the program and returns an integer value upon exiting.
 *
 * Return:
 *  0 (success)
 *  1 if an error occurred
 */

int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float fl;

	printf("Size of a char: %zu byte(s)\n", sizeof(ch));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)", sizeof(fl));
	return (0);
}
