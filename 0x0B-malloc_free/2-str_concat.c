#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: input string
 * @s2: input string
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *new;

	size1 = 0;
	size2 = 0;
	while (s1[size1] != 00)
	{
		size1++;
	}
	while (s2[size2] != 00)
	{
		size2++;
	}
	new = malloc(size1 + (size2 + 1));
	if (size1 != 0 && size2 != 0)
	{
		for (i = 0; i < size1; i++)
		{
			new[i] = s1[i];
		}
		for (j = 0; j <= size2; j++)
		{
			new[size1 + j] = s2[j];
		}
	}
	else
	{
		new = "";
	}
	return (new);
}
