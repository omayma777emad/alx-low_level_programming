#include <stdlib.h>

/**
 * free_grid - free the grid
 * @height: int
 * @grid: grid of memories
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
