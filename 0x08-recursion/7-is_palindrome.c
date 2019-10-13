#include "holberton.h"

int pal(int, char*);
int size(char*);

/**
 * is_palindrome - test if string is palindrome
 * @s: input string
 * Return: always 1 (success)
 */

int is_palindrome(char *s)
{
	int z;

	z = size(s);

	return (pal(z, s));
}

int pal(int siz, char *s)
{
	if (siz <= 0)
	{
		return (1);
	}
	else
	{
		if (*s == *(s + siz))
		{
			return (pal(siz - 1, s + 2));
		}
		else
			return (0);
	}
}

int size(char *s)
{
	if (*s != 00)
	{
		return (1 + size(s + 1));
	}
	else
		return (0);
}
