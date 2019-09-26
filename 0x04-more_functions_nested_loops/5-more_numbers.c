#include "holberton.h"

/**
 * void more_numbers - print numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, c;

	for (c = 0; c <= 10; c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
			}
			else
				_putchar(num + 48);
		}
		_putchar('\n');
	}
}
