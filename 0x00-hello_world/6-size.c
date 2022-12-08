#include <stdio.h>
#include <limits.h>
/**
 *  main - Entry point
 *  print size of char
 *  print size of short
 *  print size of int
 *  print size of long
 *  print size of long long
 *  print size of float
 *  print size of double
 *  print size of long double
 *  Return: Always 0 (success)
 */

int main(void)
{printf("char: %zu bytes\n", sizeof(char));
printf("short: %zu bytes\n", sizeof(short));
printf("int: %zu bytes\n", sizeof(int));
printf("long: %zu bytes\n", sizeof(long));
printf("long long: %zu bytes\n", sizeof(long long));
printf("float: %zu bytes\n", sizeof(float));
printf("double: %zu bytes\n", sizeof(double));
printf("long double: %zu bytes\n", sizeof(long double));
return (0);
}

