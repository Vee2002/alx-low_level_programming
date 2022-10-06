#include <stdio.h>
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
char *ptr;

ptr = (char *)malloc(sizeof(ptr);

if (ptr == NULL)
exit(98);

else
return (ptr);
}
