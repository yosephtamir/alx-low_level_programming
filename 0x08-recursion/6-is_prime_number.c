#include "main.h"
/**
 * hiruu - is a function used to check divisiblity
 *
 * @n2: is is the number
 *
 * @hir: is the loop
 *
 * Return: 1 or 0
 */

int hiruu(int n2, int hir)
{
	if (n2 % hir == 0)
		return (0);

	if (hir == n2 / 2)
		return (1);

	return (hiruu(n2, hir + 1));
}

/**
 * is_prime_number - prime number identfier
 * @n: The number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int hir = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (hiruu(n, hir));
}
