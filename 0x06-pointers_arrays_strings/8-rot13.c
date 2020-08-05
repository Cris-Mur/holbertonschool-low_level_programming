#include "holberton.h"

/**
 * rot13 - ecrypt rot13
 * @s: string input
 * Return: s
 */

char *rot13(char *s)
{
	int i, oi;

	char ori[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 00; i++)
	{
		for (oi = 0; ori[oi] != 00; oi++)
		{
			if (s[i] == ori[oi])
			{
				s[i] = key[oi];
				break;
			}
		}
	}
	return (s);
}
