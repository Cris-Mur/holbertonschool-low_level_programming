#include "holberton.h"

/**
 * print_diagsums - sum diagonal
 * @a: input pointer
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum;

	for (x = size; x >= 0; x--)
	{
		
