#include "holberton.h"

/**
 * _strspn - count bytes to mach
 * @s: string to input
 * @accept: string to search
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; accept[j] != 00; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
