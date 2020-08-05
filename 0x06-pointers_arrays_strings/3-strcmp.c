#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 (succes) or operation subtraction
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != 00 && s2[i] != 00) && s1[i] == s2[i])
	{
		i++;
	}

	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
		return (0);
}
