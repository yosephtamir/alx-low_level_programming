#include "main.h"

/**
 *_isalpha - checks for lowercase
 *
 * @c: is ascii character of argument
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else  if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
