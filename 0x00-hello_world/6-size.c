#include <stdio.h>
/**
 *  main - Entry point
 *
 *
 *  Returns: 0 (success)
 */
int main(void) {
	int i;
	char ch;
	float fl;
	double db;
	long int li;
	long long int lli;
	/**
	 * sizeof evaluates the size of various data types of the said computer
	 * printf collects and prints the results of sizeof onto the console or monitor
	 */
	printf("Size of int: %zu bytes\n", sizeof(i));
	printf("Size of char: %zu bytes\n", sizeof(ch));
	printf("Size of float: %zu bytes\n", sizeof(fl));
	printf("Size of double: %zu bytes\n", sizeof(db));
	printf("Size of long int: %zu bytes\n", sizeof(li));
	printf("Size of long long int: %zu bytes", sizeof(lli));
	return (0);
}
