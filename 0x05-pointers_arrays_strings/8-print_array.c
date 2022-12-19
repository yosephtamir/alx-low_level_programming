#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of array
 *
 * @a: a string
 *
 * @n: number of string
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && j < n)
		{
			printf("%d, ", a[i]);
			i++;
			j++;
		}
		printf("%d\n", a[i]);
	}
}
