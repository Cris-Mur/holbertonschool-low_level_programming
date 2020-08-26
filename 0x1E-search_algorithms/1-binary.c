#include "search_algos.h"

/**
 * pr_arr - print integer array to n

 */
void pr_arr(int *arr, size_t n)
{
	size_t x;

	if (!arr)
		return;

	x = 0;
	printf("Searching in array: ");
	while (x < n)
	{
		if (x < n - 1)
			printf("%d, ", arr[x]);
		else
			printf("%d\n", arr[x]);
		x++;
	}
}
/**
 * binary_search - run binary search
 * @array: input array
 * @size: input size of array to search
 * @value: to search
 * Return: index of value or -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;
	pr_arr(array, size);
	while (l < r)
	{
		mid = (l+r)/2;
		if (array[mid] < value)
		{
			pr_arr(&array[mid + 1], (r - mid) );
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			pr_arr(&array[l], mid);
			r = mid - 1;
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}