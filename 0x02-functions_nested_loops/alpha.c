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
	if (c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E')
	{
		return (1);
	}
	else if (c == 'F' || c == 'K' || c == 'H' || c == 'I' || c == 'J')
	{
		return (1);
	}
	else if (c == 'K' || c == 'L' || c == 'M' || c == 'N' || c == 'O')
	{
		return (1);
	}
	else if (c == 'P' || c == 'Q' || c == 'R')
	{
		return (1);
	}
	else if (c == 'S' || c == 'T' || c == 'U')
	{
		return (1);
	}
	else if (c == 'V' || c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
