#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - is used to concatinate two strings
 * @s1: is the first string to be concatinated
 * @s2: is the second string to be concatinated
 * @n: is the length of s2
 * Return: concatinated string S1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0, m = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	if (n >= j)
		m = i + j;
	else
	{
		m = i + n;
		j = n;
	}


	ptr = malloc(m);

	if (ptr == NULL)
		return (NULL);

	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		ptr[k] = s2[l];
		l++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

