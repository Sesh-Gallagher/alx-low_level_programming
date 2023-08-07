#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2D grid that was previously created
 * @grid: Pointer to 2d Grid
 * @height: height of grid or number or rows
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int z;
		for (z = 0; z < height; z++)
		{
			free(grid[z]);
		}
		free(grid);
}
