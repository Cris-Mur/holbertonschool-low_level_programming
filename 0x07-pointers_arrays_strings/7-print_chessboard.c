#include "holberton.h"

/**
 * print_chessboard - print chess
 * @a: input string
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int sz, x, y;

	sz = sizeof(*a);

	for (y = 0; y < sz; y++)
	{
		for (x = 0; x < sz; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar(10);
	}
}
