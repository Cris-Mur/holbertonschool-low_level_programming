#include "holberton.h"

/**
 * free_grid - freedom grid
 * @grid: input matrix
 * @height: height of matrix
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL)
	{
		for (h = (height - 1); h >= 0; h--)
		{
			free(grid[h]);
		}
	}
	free(grid);
}
