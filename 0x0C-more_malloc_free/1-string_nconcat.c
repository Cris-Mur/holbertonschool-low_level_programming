#include "holberton.h"

/**
 * string_nconcat - concatenate n times
 * @s1: input string
 * @s2: input string
 * @n: number of iterations
 * Return: new string concatenate n things
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, i;
	char *new;

	for (size = 0; s1[size]; size++)
	{
	}

	new = malloc(size + (n + 1) * sizeof(char *));
	if (new == NULL)
	{
		free(new);
		return (00);
	}

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; s2[i] && i < n; size++, i++)
	{
		new[size] = s2[i];
	}
	new[size] = 00;
	return (new);
}
