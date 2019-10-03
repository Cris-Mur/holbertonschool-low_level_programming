#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: string of destiny
 * @src: source string
 * @n: cant of iterations
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 00)
	{
		i++;
	}
	j = 0;
	while (src[j] != 00 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
