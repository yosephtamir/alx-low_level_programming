#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - is used to print an array
 * @array: is an a array to be printed
 * @size: is size of the array to be printed
 * @action: is the function used to perform the task
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
	else
		return;
}
