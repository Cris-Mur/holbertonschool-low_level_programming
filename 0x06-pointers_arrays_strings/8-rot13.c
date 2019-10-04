#include "holberton.h"

/**
 * rot13 - ecrypt rot13
 * @s: string input
 * Return: s
 */

char *rot13(char *s)
{
	int i, ki1;

	char key1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 00; i++)
	{
		for (ki1 = 0; key1[ki1] != 00; ki1++)
		{
			if (s[i] == key1[ki1])
			{
				s[i] = key2[ki1];
			}
		}
	}
	return (s);
}
