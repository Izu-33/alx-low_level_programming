#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-D grid created by another function.
 * @grid: The 2-D array to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
