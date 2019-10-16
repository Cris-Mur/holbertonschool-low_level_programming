#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - matrix integer
 * @width: long in x (cartesian)
 * @height:long in y (cartesian)
 * Return: matrix integer
 */

int **alloc_grid(int width, int height)
{
	int x, y, **matrix;

	matrix = malloc(height * sizeof(int*));
	*matrix = malloc(width * sizeof(int));
	if (width > 0 || height > 0)
	{
		for (y = 0; y < height; y++)
		{
			for (x = 0; x < width; x++)
			{
				matrix[y][x] = 0;
			}
		}
	}
	else
	{
		return (00);
	}
	return (matrix);
}
