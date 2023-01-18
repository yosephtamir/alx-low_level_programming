#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - is used to print an index of int
 * @array: is an array to be checked
 * @size: is size of the array
 * @cmp: is a function that checks the condition
 * Return: 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
