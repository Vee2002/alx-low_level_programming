#include "dog.h"

/*
*struct_dog - Variable of type struct dog
@name: dog name
@age: dog age
@owner: dog owner
*d: pointer
*/

void struct_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
