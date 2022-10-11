#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * struct dog: new structure
 * @owner: dog owner
 * @name: dog name
 * @age: dog age
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
