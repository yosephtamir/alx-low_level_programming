#include "main.h"

/**
 * cap_string  - is used to convert a string from lower case to upper
 *
 * @a: is a global variable
 *
 * Return: a
 */

char *cap_string(char *a)
{
	int i;
	int n;

	for (i = 0; a[i]; i++)
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;
		n = i - 1;

		if (a[n] == '\n' || a[n] == ' ' || a[n] == '\t' ||
			a[n] == ',' || a[n] == '.' ||
			a[n] == ';' || a[n] == '!' ||
			a[n] == '?' || a[n] == '"' ||
			a[n] == '(' || a[n] == ')' ||
			a[n] == '{' || a[n] == '}' ||
			i == 0)
			a[i] = a[i] - 32;
	}

	return (a);
}
