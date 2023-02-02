#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to flip to 
 * get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, i = 0;

	while (xor > 0)
	{
		i += (xor & 1);
		xor >>= 1;
	}

	return (i);
}
