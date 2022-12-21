#include "main.h"

/**
 * _strncpy - is used to copy a string
 *
 * @dest: is used to pass the coppied string
 *
 * @src: is used to bring the string to the function
 *
 * @n: is used to pass an integer value
 *
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
