#include "holberton.h"

/**
 * _strpbrk - search in a string
 * @s: string input
 * @accept: string matches
 * Return: string match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; accept[j] != 00; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + 2);
			}
		}
	}
	return (00);
}
