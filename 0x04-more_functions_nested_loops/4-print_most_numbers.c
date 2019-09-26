#include "holberton.h"

/**
 * print_most_numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
		{
			num++;
		}
		_putchar(num);
	}
	_putchar('\n');
}
