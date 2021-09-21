#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid previously created by
 *your alloc_grid function
 *@grid: grid
 *@height: Height
 *Retrun: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
