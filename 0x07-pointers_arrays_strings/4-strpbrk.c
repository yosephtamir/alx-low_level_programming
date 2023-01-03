#include "main.h"
/**
 * _strpbrk - locates the first occurrence
 *
 * @s: the first string
 *
 * @accept: used to locate
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
