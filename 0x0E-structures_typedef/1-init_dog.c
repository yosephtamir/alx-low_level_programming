#include <stdio.h>
#include "dog.h"
/**
 * init_dog - is used to initialize the struct;
 * @d: is a struct
 * @name: is name of the puppy
 * @age: is age of the puppy
 * @owner: is owner of the puppy
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

