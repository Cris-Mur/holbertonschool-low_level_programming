#include "holberton.h"

/**
 * _atoi - string to integer
 * @s: input string
 * Return integer
 */

int _atoi(char *s)
{
	int sign, n, cn;

	cn = 0;
	n = 0;
	sign = 0;
	while (s != 00 && *s != '\00' && *s != '\n')
	{
		sign = *(s - (cn + 1)) == 45 ? -1 : 1;
		while (*(s) >= 48 && *(s) <= 57)
		{
			cn++;
			if (cn > 1)
			{
				n = n * 10;
				n = n + (*s - 48);
			}
			else
				n = *s - 48;
			s += *s != '\00' ? 1 : 0;
		}
		s += *s != '\00' ? 1 : 0;
	}
	if (sign == -1)
	{
		n = n * sign;
	}
	return (n);
}
