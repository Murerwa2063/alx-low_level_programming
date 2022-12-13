#include <stdio.h>
/**
 * main - Starting point
 *
 * Return:
 * 0 (success)
 * non-zero if an errror occurred
 */

int main(void)

{
int a;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (a = 'A'; a <= 'Z'; a++)
putchar(a);
putchar('\n');

return (0);
}
