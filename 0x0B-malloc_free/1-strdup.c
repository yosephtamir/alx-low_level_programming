#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - is used to duplcate the char
 *
 * @str: is the string to be duplctd.
 *
 * Return: NULL or str
 */

char *_strdup(char *str)
{
	char *i;
	int j = 0, k = 0;

	while (*(str + k) != '\0')
	{
		k++;
	}
	i = (char *) malloc(k * sizeof(char));

	if (i == NULL)
	{
		return (NULL);
	}
	else if (str != NULL)
	{
		while (j < (k + 1))
		{
			i[j] = str[j];
			j++;
		}
		return (i);
	}
	else
		return (NULL);
}
