#include "holberton.h"

/**
 * print_alphabet_x10 - dispays lowercase alphabet 10 times
 *
 * Return:
 */
void print_alphabet_x10(void)
{


	for (int j = 0; j <= 10; j++)
	{
		for (char c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
