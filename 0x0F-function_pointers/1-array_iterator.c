#include "function_pointers.h"

/**
 * array_iterator - print array
 * @array: input array
 * @size: size of array
 * @action: pointer to funtion
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 00 && action != 00)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
