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

	start = 0;
	step = sqrt(size);

	while (step < size)
	{
		if (array[start] <= value && array[step] >= value)
		{
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
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		start = step;
		step = step + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, step);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	return (-1);
}
