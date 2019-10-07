#include "holberton.h"

/**
 * _strchr - locate a character
 * @s: input string
 * @c: char to locate
 * Return: a pointer to first occurence of the char
 */

char *_strchr(char *s, char c)
{
	int o;

	for (o = 0; s[o] != 00; o++)
	{
		if (s[o] == c)
		{
			return (s + o);
		}
		if (s[o + 1] == c)
		{
			return (s + 1 + o);
		}
	}
	return (0);
}
