#include "main.h"

/**
 * free_grid - Function to free memory used by grid
 * @grid: pointer to allocated grid
 * @height: height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
