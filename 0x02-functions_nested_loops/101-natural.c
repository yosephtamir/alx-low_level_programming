#include <stdio.h>

/**
 * main - is used to add a numbers from 0 to 1024 which are multiples of 3 & 5
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
