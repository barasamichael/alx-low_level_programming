#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid
 * @grid: pointer
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
