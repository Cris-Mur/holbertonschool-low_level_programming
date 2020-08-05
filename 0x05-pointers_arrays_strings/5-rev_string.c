#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: pointer input
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char aux;

	i = 0;
	j = 0;
	while (s[i] != 00)
	{
		i++;
	}
	i--;
	while (i > j)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
		i--;
		j++;
	}
}
