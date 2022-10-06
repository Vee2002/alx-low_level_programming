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
	unsigned int i;
	char *p;

	if (nmemb || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	a = b = malloc(nb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}

