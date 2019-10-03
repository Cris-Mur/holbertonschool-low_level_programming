#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string of destiny
 * @src: string of source
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 00; i++)
	{
	}
	for (j = 0; src[j] != 00; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
