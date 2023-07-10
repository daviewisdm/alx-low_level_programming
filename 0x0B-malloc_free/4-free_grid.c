#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array previously created by my alloc_grid
 * @grid: 2d grid arrays of integers
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: NULL
 *
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
