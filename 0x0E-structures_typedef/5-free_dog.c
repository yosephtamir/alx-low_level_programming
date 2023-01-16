#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - is used to deallocate the mem space
 * @d: is the char
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
