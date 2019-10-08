#include "holberton.h"

/**
 * _strspn - count bytes to mach
 * @s: string to input
 * @accept: string to search
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, m;

	for (m = 0; s[m]; m++)
	{
		for (i = 0; accept[i] != 00; i++)
		{
			if (s[i] == accept[i])
			{
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
	}
	return (m);
}
