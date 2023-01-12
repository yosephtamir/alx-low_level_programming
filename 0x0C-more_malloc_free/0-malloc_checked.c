#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - is used to allocate a memory
 *
 * @b: is a number of memory to be allocated
 *
 * Return: the ptr
 */

void *malloc_checked(unsigned int b)
{
	void *len;

	len = malloc(b);

	if (len == NULL)
		exit(98);
	return (len);
}
