#include "holberton.h"

/**
 * get_bit - get value of a bit
 * @n: input number
 * @index: index of value
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
