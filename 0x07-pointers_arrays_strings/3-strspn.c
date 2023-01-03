#include "main.h"

/**
 * _strspn - gets a length of a prefix substring
 *
 * @s: is the whole string
 *
 * @accept: is a prefix
 *
 * Return: returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
