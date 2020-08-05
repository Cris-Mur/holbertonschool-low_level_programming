#include "holberton.h"

/**
 * clear_bit - clear bits of a value
 * @n: input dir
 * @index: index of a bit
 * Return: (1) if success (-1) if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
