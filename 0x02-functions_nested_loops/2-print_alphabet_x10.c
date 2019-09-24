#include "holberton.h"

/**
 * print_alphabet_x10 - dispays lowercase alphabet
 *
 * Return: void function
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (char c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
