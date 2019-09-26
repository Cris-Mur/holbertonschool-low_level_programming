#include "holberton.h"

/**
 * print_diagonal - print diagonal nXn
 * @n: size of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	if (n != 0 && n > 0)
	{
		int x, y;

		for (y = 0; y < n; y++)
		{
			for (x = 0; x <= y; x++)
			{
				if (x < y)
				{
					_putchar(32);
				}
				else
					_putchar(92);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
