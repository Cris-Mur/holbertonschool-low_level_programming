#include "holberton.h"

/**
 * leet - encodes into 1337
 * @s: input pointer
 * Return: s string
 */

char *leet(char *s)
{
	int i, di;
	char dif[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int key[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != 0; i++)
	{
		for (di = 0; dif[di] != 00; di++)
		{
			if (s[i] == dif[di])
			{
				s[i] = key[di/2];
				break;
			}
		}
	}
	return (s);
}
