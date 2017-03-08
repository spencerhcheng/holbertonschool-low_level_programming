#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees up memory from grid
 * @grid: grid arguement
 * @height: height of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
