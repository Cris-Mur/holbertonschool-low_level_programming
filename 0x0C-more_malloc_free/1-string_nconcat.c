#include "holberton.h"
#include <string.h>
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

	size = strlen(s1);
	new = malloc(size + (n + 1));
	if (new == NULL)
	{
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
	strcpy(new, s1);
	for (i = 0; s2[i] && i < n; size++, i++)
	{
		new[size] = s2[i];
	}
	return (new);
}
