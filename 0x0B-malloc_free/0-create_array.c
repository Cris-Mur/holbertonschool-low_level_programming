#include "holberton.h"

/**
 * create_array - creation and inicialize array
 * @size: size of array
 * @c: input character
 * Return: new array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;
	if (size != 0)
	{
		array = malloc(size);
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	else
	{
		array = 00;
	}
	return (array);
}
