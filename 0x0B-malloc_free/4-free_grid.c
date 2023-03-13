#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free 2d array created previously
 * @grid: First parameter
 * @height: second
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
