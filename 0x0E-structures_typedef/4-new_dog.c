#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - is used to duplicate the struct
 *
 * @name: is name from struct
 * @age: is age of the puppy
 * @owner: is owner of the puppy
 * Return: new_dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogdup;

	dogdup = malloc(sizeof(dog_t));
	if (dogdup == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(dogdup);
		return (NULL);
	}
	dogdup->name = name;
	dogdup->age = age;
	dogdup->owner = owner;
	return (dogdup);
}
