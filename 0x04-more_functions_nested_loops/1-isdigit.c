#include "holberton.h"

/**
 * _isdigit - check for a digit
 *@c: input parameter
 *Return: always 1 if (succes)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
