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
	int **p;
	int i, j, row, column;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int**) malloc(height * sizeof(int*));
		if (p == 0)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int*) malloc(sizeof(int) * width);
			if (p[i] == 0)
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (row = 0; row < height; row++)
		{
			for (column = 0; column < width; column++)
				p[row][column] = 0;
		}
		return (p);
}
