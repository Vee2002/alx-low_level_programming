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
	int i = 0, j;

	if (width == 0 || height = 0)
		return (NULL);
	array = (int**) malloc(sizeof(int*) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int*) malloc(sizeof(int) * width);
			if (arrray[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
			free(array);
			return (NULL);
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}

