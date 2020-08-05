#include "holberton.h"

/**
 * _strncpy - copy string
 * @dest: string of destine
 * @src: string source
 * @n: number of iterations
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 00; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
