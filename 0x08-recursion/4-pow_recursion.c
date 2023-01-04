#include "main.h"
/**
 * _pow_recursion - is used for power
 *
 * @x: is the number to be multplied
 * @y: is the power
 *
 * Return: 1,-1 or power
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (-1);
}
