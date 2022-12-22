#include "main.h"

/**
 * string_toupper - is used to convert a string from lower case to upper
 *
 * @a: is a global variable
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)

		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;

	return (a);
}
