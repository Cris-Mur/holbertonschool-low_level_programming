#include "holberton.h"

/**
 * binary_to_uint - convert binary to Unsigned int
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int size, base;
	unsigned int num;

	num = 0;
	for (size = 0; b[size]; size++)
	{
		if (b[size] != 48 && b[size] != 49)
		{
			b = NULL;
			return (0);
		}
	}
	size--;
	for (base = 1; b[size]; size--)
	{
		if ((b[size] - 48) == 1)
		{
			num = num + base;
		}
		else
			num = num + 0;
		base = base << 1;
	}
	return (num);
}
