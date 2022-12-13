#include "main.h"

/**
 *_islower(int c) - checks for lowercase
 *
 * parameter or member 'c' - is an integer which is a mediator
 *
 * return value: 1 if it is lowercase or  0 if it is not lowercase
 */

int _islower(int c)
{

	if (c == 'a' || c == 'b' || c == 'c' || c == 'd' || c == 'e')
	{
		return (1);
	}
	else  if (c == 'f' || c == 'g' || c == 'h' || c == 'i' || c == 'j')
	{
		return (1);
	}
	else  if (c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'o')
	{
		return (1);
	}
	else  if (c == 'p' || c == 'q' || c == 'r')
	{
		return (1);
	}
	else if (c == 's' || c == 't' || c == 'u')
	{
		return (1);
	}
	else  if (c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
