#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int x, y;

		for (y = 0; y < size; y++)
		{
			for (x = 0; x <= size; x++)
			{
				if (x < size - y)
				{
					_putchar(32);
				}
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar(10);
}
