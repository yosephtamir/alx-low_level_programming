#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - is used to create and return an array
 *
 * @size: is an  size of the char
 * @c: is the charcter
 *
 * Return: c or null
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j = 0;

	i = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		while (j < size)
		{
			i[j] = c;
			j++;
		}
	}
	return (i);
}
