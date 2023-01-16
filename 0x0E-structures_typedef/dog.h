#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is a struct used to store a name age and owner
 * @name: is name of the dog
 * @age: is age of the dog
 * @owner: is owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
