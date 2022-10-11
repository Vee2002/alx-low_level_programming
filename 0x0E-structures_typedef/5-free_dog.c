#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Functon that frees a dog
 * @d: pointer
 * Return: returns nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
