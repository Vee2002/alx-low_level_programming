#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer of 
 * two dimensional arrays
 * @width: First parameter
 * @height: Second parameter
 * Return: returns an integer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, row, column;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int**) malloc(height * sizeof(int*))
		if (array == 0)
		{
			free(array);
	return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			array[i] = (int*) malloc(sizeof(int) * width);
			if (array[i] == 0)
			{
				for (j = 0; j <= i; j++)
					free(array[j]);
				free(array);
				return (NULL);
			}
		}
		for (row = 0; row < height; row++)
		{
			for (column = 0; column < width; column++)
				array[row][column] = 0;
		}
		return (array);
}
