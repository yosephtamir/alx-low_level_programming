#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integer
 *
 * @min: is the minimum value
 *
 * @max: is the max value
 *
 * Return: null or pointer
 */

int *array_range(int min, int max)
{
	int *ptr, gar, lack, i;

	if (min > max)
		return (NULL);
	gar = max - min + 1;
	ptr = malloc(gar * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (lack = min, i = 0; lack <= max && i < gar; lack++, i++)
		ptr[i] = lack;

	return (ptr);
}
