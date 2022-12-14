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

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + k) != '\0')
	{
		k++;
	}
	i = (char *) malloc(k * sizeof(char) + 1);

	if (i == NULL)
	{
		return (NULL);
	}
	else if (str != NULL)
	{
		while (j < k)
		{
			i[j] = str[j];
			j++;
		}
		return (i);
	}
	else
	{
		return (NULL);
	}
}
