#include "holberton.h"

/**
 * _strstr - locate substring
 * @haystack: input string
 * @needle: input string
 * Return: string locate substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != 00; x++)
	{
		for (y = 0; needle[y] != 00; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			return (haystack + x);
		}
	}
	return (00);
}
