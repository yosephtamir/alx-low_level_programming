#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dup - is used to dupplicate a string
 * @len: is a character
 * Return: dup
 */

char *dup(char *len)
{
	unsigned int i = 0, j;
	char *car;

	while (*(len + i) != '\0')
		i++;

	car = (char *) malloc(sizeof(char) * i + 1);
	if (car == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		car[j] = len[j];
		j++;
	}
	car[j] = '\0';
	return (car);
}

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
	char *dogname, *dogowner;

	dogdup = malloc(sizeof(dog_t));
	if (dogdup == NULL)
		return (NULL);
	dogname = dup(name);
	if (dogname == NULL)
	{
		free(dogdup);
		return (NULL);
	}
	dogowner = dup(owner);
	if (dogowner == NULL)
	{
		free(dogname);
		free(dogowner);
		return (NULL);
	}
	dogdup->name = name;
	dogdup->age = age;
	dogdup->owner = owner;
	return (dogdup);
}
