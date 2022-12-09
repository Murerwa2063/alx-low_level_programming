#include <stdio.h>
#include <stdint.h>
/**
 *  main - Entry point
 *  print size of char
 *  print size of short
 *  print size of int
 *  print size of long
 *  print size of int8_t
 *  print size of int16_t
 *  print size of int32_t
 *  print size of int64_t
 *  print size of float
 *  print size of double
 *  print size of long double
 *  Returns: 0 (success)
 */
/*Returns: 0 (success), 1 (error)*/
int main(void)
{
printf("char: %zu bytes\n", sizeof(char));
printf("short: %zu bytes\n", sizeof(short));
printf("int: %zu bytes\n", sizeof(int));
printf("long: %zu bytes\n", sizeof(long));
printf("long long: %zu bytes\n", sizeof(long long));
printf("int8_t: %zu bytes\n", sizeof(int8_t));
printf("int16_t: %zu bytes\n", sizeof(int16_t));
printf("int32_t: %zu bytes\n", sizeof(int32_t));
printf("int64_t: %zu bytes\n", sizeof(int64_t));
printf("float: %zu bytes\n", sizeof(float));
printf("double: %zu bytes\n", sizeof(double));
printf("long double: %zu bytes\n", sizeof(long double));
return (0);
}
