#include <stdlib.h>
#include "main.h"
#include <stdio.j>

/**
 * free_grid - frees two dimensional arrays
 * @grid: First parameter
 * @height: Second parameter
 * Return: returns nothing
 */

void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
