#include "holberton.h"

/**
 * puts2 - print other chars
 * @str: pointer input
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 00; i=i+2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
