#include "holberton.h"

/**
 * puts_half - prins half string
 * @str: input pointer
 * Return: void
 */

void puts_half(char *str)
{
	int n, ci;

	while (str[n] != 00)
	{
		n++;
		ci = n;
	}
	if (n % 2 != 0)
	{
		n = (n - 1) / 2;
		n++;
	}
	else
	{
		n = n / 2;
	}
	while (n < ci)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
