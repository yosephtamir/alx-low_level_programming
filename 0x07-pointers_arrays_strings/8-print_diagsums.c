#include <stdio.h>
/**
 * print_diagsums - is used to print diagonal sums
 *
 * @a: is an array
 *
 * @size: is used to specify the size
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;

	j = 0;
	k = 0;
	for (i = 0; i < (size * size); i += size + 1)
		j += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		k += a[i];
	printf("%d, %d\n", j, k);
}
