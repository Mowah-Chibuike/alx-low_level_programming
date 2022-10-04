#include "main.h"

/**
 * free_grid: frees memory used by a 2D array of integers
 * @grid: pointer to the 2D array
 * @height: number of rows in the 2D array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
