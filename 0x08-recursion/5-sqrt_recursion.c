#include "main.h"
/**
 * two - is ussed is used to calculate a sqrt
 *
 * @num: the calculated root
 * @lama: is the power
 *
 * Return: sqrt;
 */

int two(int num, int lama)
{
	if ((lama * lama) == num)
		return (lama);

	if (lama == num / 2)
		return (-1);

	return (two(num, lama + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: returns the root.
 *
 * Return: 1 ,-1 or root
 *
 */
int _sqrt_recursion(int n)
{
	int lama = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (two(n, lama));
}
