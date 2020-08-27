#include "search_algos.h"

/**
 * interpolation_search - run interpolation algorithm search
 * @array: input array
 * @size: input size of the array
 * @value: value to search
 * Return: index of value or -1 if fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, mid;

	low = 0;
	high = size - 1;

	while ((array[high] != array[low]) &&
	       (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high] - array[low]));

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
