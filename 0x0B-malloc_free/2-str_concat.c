#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - is used to concatinate two strings
 *
 * @s1: is the first string to be concatinated
 *
 * @s2: is the second string to be concatinated
 *
 * Return: concatinated string S1
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
	{
		m = i + j;
		j++;
	}
	ptr = (char *) malloc(m * sizeof(char) + 1);

	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (l <= (m - i))
	{
		ptr[k] = s2[l];
		l++;
		k++;
	}
	return (ptr);
}

