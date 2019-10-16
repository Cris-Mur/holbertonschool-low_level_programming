#include "holberton.h"

/**
 * free_grid -
 *
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
	else
	{
		return;
	}
	free(grid);
	return;
}
