#include "holberton.h"

int concatlen(char *, char*);
/**
 * str_concat - concatenate two strings
 * @s1: input string
 * @s2: input string
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int size, i, j;
	char *new;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	size = concatlen(s1, s2);
	new = malloc(size * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; s1[i]; i++)
		{
			new[i] = s1[i];
		}
		for (j = 0; s2[j]; j++)
		{
			new[i + j] = s2[j];
		}
	}
	else
	{
		new = "";
	}
	return (new);
}

int concatlen(char *s1, char *s2)
{
	int size1, size2;

	for (size1 = 0; s1[size1]; size1++)
	{}
	for (size2 = 0; s2[size2]; size2++)
	{}
	return (size1 + size2 + 1);
}
