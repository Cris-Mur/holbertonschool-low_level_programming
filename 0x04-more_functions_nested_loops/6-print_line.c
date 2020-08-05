#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n : input parameter
 * Return: void
 */

void print_line(int n)
{
	int lim;

	for (lim = 0; lim < n; lim++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
