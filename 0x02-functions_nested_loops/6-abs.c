#include "main.h"

/**
 * int_abs -absolute value
 *
 * return: absolute value
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
