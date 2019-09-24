#include "holberton.h"

/**
 * print_alphabet_x10 - lowercase alphabet 10 times
 *
 * Return
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j <= 10; j++)
	{
		char c;

		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
