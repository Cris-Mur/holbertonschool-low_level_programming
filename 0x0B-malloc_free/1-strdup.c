#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - put input string in other string
 * @str: input string
 * Return: string
 */

char *_strdup(char *str)
{
	int size, i;
	char *new;

	if (str != 00)
	{
		size = 0;
		while (str[size] != 00)
		{
			size++;
		}
		size++;

		new = malloc(size * sizeof(char));
		for (i = 0; i <= size; i++)
		{
			new[i] = str[i];
		}
	}
	else
	{
		return (str);
	}
	return (new);
}
