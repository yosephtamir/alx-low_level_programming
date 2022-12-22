#include "main.h"

/**
 * leet - is used to incode.
 *
 * @b: encoded string.
 *
 * Return: b
 */

char *leet(char *b)
{
	int i, j;
	char c[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (b[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (b[i] == c[j] ||
			    b[i] - 32 == c[j])
				b[i] = j + '0';
		}

		i++;
	}

	return (b);
}
