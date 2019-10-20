#include "holberton.h"
void spaces(int x, int y, int n);
/**
 * print_times_table - print n times table
 * @n: input parameter
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, mul;

	if (n >= 0 && n < 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				mul = x * y;
				if (mul < 10)
				{
					_putchar(mul + 48);
				}
				else if (mul < 100)
				{
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else if (mul >= 100)
				{
					_putchar((mul / 100) + 48);
					_putchar(((mul / 10) % 10) + 48);
					_putchar((mul % 10) + 48);
				}
				spaces(x, y, n);
			}
			_putchar(10);
		}
	}
}

/**
 * spaces - funtion print coma and spaces
 * @x: is a input number
 * @y: other imput number that is multiply with x
 * @n: input size of the grid
 * Return: void funtion
 */
void spaces(int x, int y, int n)
{
	if (x != n)
	{
		if (y * (x + 1) <= 9)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar(32);
		}
		else if (y * (x + 1) < 100)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		else if (y * (x + 1) >= 100)
		{
			_putchar(44);
			_putchar(32);
		}
	}
}
