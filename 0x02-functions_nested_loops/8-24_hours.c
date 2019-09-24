#include "holberton.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer
 *
 * Return: void function
 */

void jack_bauer(void)
{
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			_putchar((h/10) + 48);
			_putchar((h%10) + 48);
			_putchar(58);
			_putchar((m/10) + 48);
			_putchar((m%10) + 48);
			_putchar('\n');
		}
	}
}
