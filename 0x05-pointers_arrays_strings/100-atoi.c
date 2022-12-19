#include "main.h"

/**
 * _atoi - is used to convert string to intiger
 *
 * @s: is an argument
 *
 * Return: lakk*fir
 */


int _atoi(char *s)
{
	int fir = 1;
	unsigned int lakk = 0;

	do {
		if (*s == '-')
			fir = fir * -1;

		else if (*s >= '0' && *s <= '9')
			lakk = (lakk * 10) + (*s - '0');

		else if (lakk > 0)
			break;

	} while (*s++);

	return (lakk * fir);
}
