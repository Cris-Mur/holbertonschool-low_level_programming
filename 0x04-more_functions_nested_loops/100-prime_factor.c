#include <stdio.h>

/**
 * main - print prime factors
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int long n = 612852475143, i = 2;

	while (i <= n)
	{
		if (n % i == 0)
		{
			n = n / i;
			if (n == 1)
			{
				break;
			}
			i = 1;
		}
		i++;
	}
	printf("%lu\n", i);
	return (0);
}
