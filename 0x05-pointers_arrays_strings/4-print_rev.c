#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: input pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != 00)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar(10);
}
