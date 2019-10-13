#include "holberton.h"

int prime(int, int);

/**
 * is_prime_number - search prime number
 * @n: input integer
 * Return: always 1 (success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (prime(2, n));
}

/**
 * prime - test if n is a prime number
 * @n intput integer
 * @mod: test of prime number
 * Return: always 1 (success)
 */

int prime(int mod, int n)
{
	if (mod == n)
	{
		return (1);
	}
	else if (n % mod == 0)
	{
		return (0);
	}
	else
	{
		return (prime(mod + 1, n));
	}
}
