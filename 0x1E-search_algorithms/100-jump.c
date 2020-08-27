#include "search_algos.h"

/**
 * jump_search - run jump search
 * @array: input array in to search
 * @size: input size of array
 * @value: value to search
 * Return: index to value or -1 if fail
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, step;

	if (!array)
		return (-1);

	start = step = 0;

	while (step <= size)
	{
		if (array[step] >= value || step == size - 1)
		{
			if (step == size - 1)
				printf("Value found between indexes [%lu] and [%lu]\n", start, size);
			else
				printf("Value found between indexes [%lu] and [%lu]\n", start, step);
			for (; start <= step; start++)
			{
				printf("Value checked array[%lu] = [%d]\n", start, array[start]);
				if (array[start] == value)
				{
					return (start);
				}
			}
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		start = step;
		step = step + sqrt(size);
		if (step >= size)
			step = size - 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, step);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	return (-1);
}
