#include "main.h"

/**
 * _strcmp - is used to compare an array
 *
 * @s1: is the first array
 *
 * @s2: is the second array
 *
 * Return: s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
