#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: height of grid
 * Return:pointer to 2D array of integer, NULL if faild
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	free(grid[i]);
	grid = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (!grid[i])
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
