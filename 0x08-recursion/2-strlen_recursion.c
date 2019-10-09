#include "holberton.h"

/**
 * _strlen_recursion - count length
 * @s: input string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	s = s + 1;
	return (_strlen_recursion(s) + 1);
}
