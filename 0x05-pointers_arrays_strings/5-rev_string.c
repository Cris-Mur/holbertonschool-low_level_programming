#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: pointer input
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char c[10];

	i = 0;
	j = 0;
	while (s[i] != 00)
	{
		i++;
	}
	while (s[j] != 00)
	{
		if (s[i] == 00)
		{
			i--;
		}
		else
		{
			c[j] = s[i];
			i--;
			j++;
		}
	}
	while (i < j)
	{
		s[i] = c[i];
		i++;
	}
}
