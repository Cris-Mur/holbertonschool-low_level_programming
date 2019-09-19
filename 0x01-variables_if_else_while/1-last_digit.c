#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d\n", n, (n % 10));
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d\n", n, (n % 10));
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d\n", n, (n % 10));
	}
	return (0);
}
