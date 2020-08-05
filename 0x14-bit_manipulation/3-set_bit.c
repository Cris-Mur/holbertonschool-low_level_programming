#include "holberton.h"

/**
 * set_bit - set value of a bit
 * @n: input dir;
 * @index: index of a bit
 * Return:(1) if is success (-1) if is fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n |= 1 << index;
		return (1);
	}
	return (-1);
}
