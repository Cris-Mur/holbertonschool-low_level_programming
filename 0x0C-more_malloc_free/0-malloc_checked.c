#include "holberton.h"

/**
 * malloc_checked - check malloc
 * @b: is a input of malloc
 * Return: always * (success)
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		free(s);
		exit(98);
	}
	return (s);
}
