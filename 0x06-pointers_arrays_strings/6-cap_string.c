#include "holberton.h"

/**
 * cap_string - capitalize all words
 * @s: pointer input
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;
	char dif[13] = {32, 10, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125, 9};

	for (i = 0; s[i] != 00; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}

		for (j = 0; dif[j] != 00; j++)
		{
			if (s[i] == dif[j])
			{
				if (s[i+1] >= 97 && s[i+1] <= 122)
				{
					s[i+1] = s[i+1] - 32;
				}
			}
		}
	}
	return (s);
}
