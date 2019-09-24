#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: entry char is lowercase 1 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
