#include "main.h"
/**
 * get_endianness - Checks the endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
		return (1);

	return (0);
}
