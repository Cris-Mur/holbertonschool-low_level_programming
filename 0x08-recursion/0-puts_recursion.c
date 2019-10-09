#include "holberton.h"

/**
 * _puts_recursion - print string recursive
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != 00)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
