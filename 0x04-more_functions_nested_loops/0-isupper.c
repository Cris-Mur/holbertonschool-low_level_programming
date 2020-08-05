#include "holberton.h"

/**
 * _isupper - check uppercase character
 *@c: input parameter
 * Return: always 1 (sucess)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
