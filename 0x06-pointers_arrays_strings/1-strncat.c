#include "main.h"
/**
 * _strncat - is used to concatinate an string
 *
 * @dest: is an argument
 *
 * @str: is the second argument
 *
 * @n: is an argument used for str
 *
 * Return: catarray
 */

char *_strncat(char *dest, char *str, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (str[j] != '\0' && j < n)
	{
		dest[i + j] = str[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
