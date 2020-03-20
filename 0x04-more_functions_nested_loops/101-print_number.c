#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_number - print n number
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
	int mod = 10;

	if (n < 0)
	{
		_putchar(45);
	}
	if (!n)
	{
		_putchar(48);
		return;
	}
	if (n < 0)
	{
		n *= -1;
	}
	if (n < 10 && n > 0)
	{
		_putchar((n) + 48);
		return;
	}
	while (n < 0 ? (((unsigned)n / mod) > 9) : (n / mod > 9))
		mod = mod * 10;
	while (mod >= 1)
	{
		_putchar(n < 0 ? (((n / mod)* -1) + 48) : ((n / mod) + 48));
		n = n % mod;
		mod = mod / 10;
	}
}
