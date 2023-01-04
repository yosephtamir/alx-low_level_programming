#include "main.h"
/**
 * factorial - is used to calculate a factorial
 *
 * @n: is a number from main function
 *
 * Return: factorial 0 or 1
 */

int factorial(int n)
{

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
