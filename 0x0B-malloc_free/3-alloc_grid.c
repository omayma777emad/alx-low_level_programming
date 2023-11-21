#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(height * sizof(iny *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
				{
					free(grid);
					return (NULL);
				}
				for (int j = 0; j < width; j++)
				{
					grid[i][j] = 0;
				}
			}
			return (grid);
}
