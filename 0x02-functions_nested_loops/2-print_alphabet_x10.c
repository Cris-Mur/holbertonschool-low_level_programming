#include "holberton.h"

/**
 * print_alphabet_x10 - dispays lowercase alphabet
 *
 * Return: void function
 */
void print_alphabet_x10(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int j = 0; j <= 10; j++)
	{
		for (int i = 0; i <= 26; i++)
		{
			_putchar(c[i]);
		}
		_putchar('\n');
	}
}
