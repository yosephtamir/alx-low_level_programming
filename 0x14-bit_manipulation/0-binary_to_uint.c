#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer
 * Return: 0 or num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, mult = 1;
	int j = 0;

	if (b == NULL)
		return (0);

	while (b[j])
		j++;

	for (j -= 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		i += (b[j] - '0') * mult;
		mult *= 2;
	}

	return (i);
}
