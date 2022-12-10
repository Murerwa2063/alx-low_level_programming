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
	int i;
	char ch;
	float fl;
	double db;
	long int li;
	long long int lli;
	/**
	 * sizeof evaluates the size of various data types
	 * printf collects and prints the results of sizeof
	 */
	printf("Size of int: %zu byte(s)\n", sizeof(i));
	printf("Size of char: %zu byte(s)\n", sizeof(ch));
	printf("Size of float: %zu byte(s)\n", sizeof(fl));
	printf("Size of long int: %zu byte(s)\n", sizeof(li));
	printf("Size of long long int: %zu byte(s)", sizeof(lli));
	return (0);
}
