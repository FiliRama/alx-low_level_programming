#include "main.h"
#include <stdlib.h>
/**
* free_grid - to free a 2D grid
* @grid: input grid to be free
* @height: input height
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
