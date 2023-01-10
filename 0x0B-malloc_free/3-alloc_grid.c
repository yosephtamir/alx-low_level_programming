#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - is used to allocate grid
 *
 * @widhth: is width of the array
 * @height: of the array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr =  (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
