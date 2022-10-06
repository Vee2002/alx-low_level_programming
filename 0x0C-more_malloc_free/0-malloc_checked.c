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
	int *p;
	
	p = malloc_checked(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
