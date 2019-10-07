#include "holberton.h"
#include <stdio.h>
/**
 * _memset - set memory
 * @s: input string
 * @b: char to set string
 * @n: number of  iterations to set
 * Return: string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

        for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
