#include "holberton.h"

/**
 * _strspn - count bytes to mach
 * @s: string to input
 * @acept: string to search
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	int i, j, n;

	m = 0;

	for (n = 0; accept[n] != 00; n++)
	{
	}
	for (j = 0; j <= n; j++)
	{
		for (i = 0; accept[i] != 00; i++)
		{
			if (s[j] == accept[i])
			{
				m++;
			}
		}
	}
	return (m);
}
