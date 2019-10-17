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
	unsigned int size1, size2, i, h;
	char *new;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
	{
	}
	for (size2 = 0; s2[size2]; size2++)
	{
	}

	if (size2 < n)
	{
		h = size2;
	}
	else
	{
		h = n;
	}
	new = malloc(size1 + (h + 1) * sizeof(char));
	if (new == NULL)
	{
		free(new);
		return (00);
	}

	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; s2[i] && i < h; size1++, i++)
	{
		new[size1] = s2[i];
	}
	new[size1] = 00;
	return (new);
}
