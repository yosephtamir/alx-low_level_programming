#include "main.h"

/**
 * _abs - absolute value
 *
 * @r: is ascii character for argument
 *
 * Return: r, r * (-1) or 0
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		r = r * (-1);
		return (r);
	}
	else
	{
		return (0);
	}
}
