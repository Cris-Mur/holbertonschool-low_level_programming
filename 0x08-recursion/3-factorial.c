#include "holberton.h"

/**
 * factorial - print factorial
 * @n: input number
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (factorial(n - 1) * n);
	}
	else
	{
		return (n < 0 ? -1 : 1);
	}
}
