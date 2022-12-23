#include "main.h"

/**
 * rot13 - is used to incrypt using rot13
 *
 * @a: is used as an argument array
 *
 * Return: b
 */

char *rot13(char *a)
{
	int i = 0;
	int j = 0;

	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i] != '\0')
	{
		while (a1[j] != '\0')
		{
			if (a[i] == a1[j])
			{
				a[i] = a2[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
