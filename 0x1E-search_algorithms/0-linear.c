#include "search_algos.h"
/**
 * linear_search - This is used for searching an index with a given number
 * @array : is the list of array to be searched
 * @size : length of the array
 * @value : the number to be searched
 * Return: index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (value);
	}
	return (-1);
}
