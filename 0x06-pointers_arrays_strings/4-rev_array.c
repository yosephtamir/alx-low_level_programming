#include "main.h"

/**
 * reverse_array - is used to reverse an intiger
 *
 * @a: is an array
 *
 * @n: is length of an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
