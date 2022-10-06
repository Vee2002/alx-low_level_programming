#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First paraemter
 * @max: Second parameter
 * Return: returns nothing
 */
int *array_range(int min, int max)
{
	unsigned int array_size, i;
	int *new_array;

	if (min > max)
		return (NULL);
	array_size = max - min;
	new_array = malloc(sizeof(int) * (array_size + 1));

	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < array_size; i++)
		new_array[i] = i + min;
	new_array[array_size] = max;
	return (new_array);
}
