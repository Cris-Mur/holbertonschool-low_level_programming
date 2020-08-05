#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter input
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
