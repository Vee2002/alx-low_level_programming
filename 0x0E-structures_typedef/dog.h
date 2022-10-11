#ifndef DOG_H
#define DOG_H

/*
*struct_dog - Variable of type struct dog
@name: dog name
@age: dog age
@owner: dog owner
*d: pointer
*/

struct dog
{
	d->name = name;
	d->age = age;
	d->owner = owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
