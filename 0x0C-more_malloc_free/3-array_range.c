#include "holberton.h"

/**
 * array_range - array range
 * @min: value minimum
 * @max: value max
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, sum, i;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		sum = max - min;
		arr = malloc(sizeof(int) * (sum + 1));
		if (!arr)
		{
			return (NULL);
		}
		for (i = 0; min <= max; i++, min++)
		{
			arr[i] = min;
		}
	}
	return (arr);
}
