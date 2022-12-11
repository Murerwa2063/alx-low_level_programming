#include <stdlib.h>
#include <time.h>

/**
* main - Starting point
*
* checks whether a number is negative or positive
*
* Return:
* 0 (success)
* non-zero if an error occurred
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("The number is %d\n", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}

	return (0);
}
