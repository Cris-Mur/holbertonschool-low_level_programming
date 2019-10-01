#include "holberton.h"
#include <unistd.h>

/**
 * _puts - print string
 * @str: input pointer
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i] != 00)
	{
		i++;
	}
	write (1, str, i);
	_putchar(10);
}
