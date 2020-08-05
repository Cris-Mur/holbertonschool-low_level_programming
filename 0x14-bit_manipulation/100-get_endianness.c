#include "holberton.h"

/**
 * get_endianness - chek endianess
 *
 * Return: (1) if success
 */
int get_endianness(void)
{
	int h;
	char *cosito = (char *) & h;
	if (*cosito)
		return (1);
	else
		return (0);
}
