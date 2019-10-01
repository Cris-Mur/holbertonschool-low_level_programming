#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: pointer input
 * Return: void
 */

void rev_string(char *s)
{
	printf("%p\n", &*s);
	int i = 0;

	while (s[i] != 00)
	{
		i++;
	}
	int j = 0;

	char c[i];

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
