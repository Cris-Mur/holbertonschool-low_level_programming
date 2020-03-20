#include "holberton.h"

/**
 * _atoi - string to integer
 * @s: input string
 * Return integer
 */

int _atoi(char *s)
{
	int sign, n;
	
	n = 0;
	sign = 1;
	while (s != 00 && *s != '\00' && *s != '\n')
	{
		sign *= *s == 45 ? -1 : 1;
		if (*(s) >= 48 && *(s) <= 57)
		{
			n = n + (*s - 48);
			if (*(s + 1) >= 48 && *(s + 1) <= 57)
				n = n * 10;
			else
				break;
		}
		s += *s != '\00' ? 1 : 0;
	}
	if (sign == -1)
	{
		n = n * sign;
	}
	return (n);
}
