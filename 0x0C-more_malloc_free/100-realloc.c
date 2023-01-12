#include "main.h"
#include <stdlib.h>
/**
 * _realloc - is used to re allocate mem
 * @ptr: is the pointer
 * @old_size: is size in byte
 * @new_size: is the newsize
 * Return: Null or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
