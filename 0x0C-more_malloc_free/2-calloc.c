#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of array elements
 * @size: Number of bytes
 * Return: NULL if nmemb/size is 0
 * or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int nb, i;
	char *a, *b;

	if ((nmemb || size) == 0)
		return (NULL);
	nb = nmemb * size;
	a = b = malloc(nb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nb; i++)
		*a++ = 0;
	return (b);
}

