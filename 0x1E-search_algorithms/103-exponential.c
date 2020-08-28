#include "search_algos.h"
#include "1-binary.c"

/**
 * exponential_search - run exponential search algorithm
 * @array: input array
 * @size: input size if the array
 * @value: value to search
 * Return: index to value or -1 if fail
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	int ret;

	if (!array || size == 0)
	{
		return (-1);
	}
	if (array[0] == value)
		return (0);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound >= size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       bound / 2, bound - 1);
		bound = size - 1;
		ret = binary_search(&array[bound / 2],
				    (size - (bound / 2)),
				    value);
		if (ret < 0)
			return (ret);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       bound / 2, bound);
		ret = binary_search(&array[bound / 2], (bound - 1), value);
		if (ret < 0)
			return (ret);
	}
	return (ret + (bound / 2));
}
