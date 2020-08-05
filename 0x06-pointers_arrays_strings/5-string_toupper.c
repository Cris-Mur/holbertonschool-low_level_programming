#include "holberton.h"

/**
 * string_toupper - change chars to upper
 * @s: input pointer
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
