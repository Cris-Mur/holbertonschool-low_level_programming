#include "holberton.h"
#include <stdio.h>
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
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar(48);
		return;
	}
	else if (n < 10)
	{
		_putchar(n + 48);
		return;
	}
	while (n / mod > 9)
	{
		mod = mod * 10;
	}
	while (mod >= 1)
	{
		_putchar((n / mod) + 48);
		n = n % mod;
		mod = mod / 10;
	}
}
