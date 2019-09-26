#include "holberton.h"

/**
 * print_square - print square
 * @size: input parameter size of square
 * Return: void
 */

void print_square(int size)
{
	if (size != 0 && size > 0)
	{
		int x, y;
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
