#include "holberton.h"

/**
 * rot13 - ecrypt rot13
 * @s: string input
 * Return: s
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
