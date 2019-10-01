#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: pointer input
 * Return: void
 */

void rev_string(char *s)
{
	int i, r;
	while (s[i] != 00)
	{
		i++;
	}

	while (i >= 0)
	{
		r = 0;
		s[r] = s[i];
		i--;
		r++;
	}
}
