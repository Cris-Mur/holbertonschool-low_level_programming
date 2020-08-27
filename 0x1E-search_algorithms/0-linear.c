#include "search_algos.h"


/**
 * linear_search - run algorithm of linear search
 * @array: input integer array
 * @size: input size of array
 * @value: to search
 * Return: index in array or -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);
	x = 0;
	while (x < size)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}
	return (-1);
}
