#include "holberton.h"

/**
 * _print_rev_recursion - reverse string
 * @s: input string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != 00)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
