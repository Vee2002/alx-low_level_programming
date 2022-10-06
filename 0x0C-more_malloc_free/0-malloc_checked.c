#include <stdlib.h>
#include <main.h>

/**
 * malloc_checked - Allocates memory
 * @b: Parameter passed
 * Return: returns a pointer to 
 * the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
