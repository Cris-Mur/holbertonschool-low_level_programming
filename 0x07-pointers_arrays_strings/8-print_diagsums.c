#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagonal
 * @a: input pointer
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int y, i, sum1 = 0, sum2 = 0;

	for (y = 0, i = 0; i < size; i++)
	{
		sum1 += *(a+y);
		y += size + 1;
	}
	printf("%d, ", sum1);
	for (y = 0, i = size-1; y < size; y++)
	{
		sum2 += *(a+i);
		i += size - 1;
	}
	printf("%d\n", sum2);
}
