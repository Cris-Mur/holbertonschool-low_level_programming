#include "holberton.h"

/**
 * alloc_grid - matrix integer
 * @width: long in x (cartesian)
 * @height:long in y (cartesian)
 * Return: matrix integer
 */

int **alloc_grid(int width, int height)
{
	int x, y, **matrix;

	matrix = malloc(height * sizeof(int *));
	!matrix? return (NULL);
	if (width > 0 || height > 0)
	{
		for (y = 0; y < height; y++)
		{
			matrix[y] = malloc(width * sizeof(int));
			if (matrix[y] != NULL)
			{
				for (x = 0; x < width; x++)
				{
					matrix[y][x] = 0;
				}
			}
			else
			{
				for (; y >= 0; y--)
				{
					free(matrix[y]);
				}
				free(matrix);
				return (NULL);
			}
		}
	}
	else
	{
		return (00);
	}
	return (matrix);
}
