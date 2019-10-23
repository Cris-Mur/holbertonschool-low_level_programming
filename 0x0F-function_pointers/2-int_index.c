#include "function_pointers.h"

#ifndef ERR__
#define ERR__ -1
#endif

/**
 * int_index - search value and return index of value
 * @array: input array
 * @size: size of array (always more than zero)
 * @cmp: pointer to funtion compare
 * Return: always index (success) -1 if failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != 00 && size > 0 && cmp != 00)
	{
		int index;

		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			{
				return (index);
			}
		}
		return (ERR__);
	}
	return (ERR__);
}
