#include <stdio.h>

/**
 * main - is an entery point
 *
 * Return: 0 or success
 */

int main(void)
{
	int i, j, k;

	for (i = 1; i < 90; i++)
	{
		j = i / 10;
		k = i % 10;

		if (i != 100 && i != 1 && i != 10 && i != 11 && i != 20 && i != 21 &&
			i != 22 && i != 30 && i != 31 && i != 32 && i != 33 && i != 40 &&
			i != 41 && i != 42 && i != 43 && i != 44 && i != 50 && i != 51 &&
			i != 52 && i != 53 && i != 54 && i != 55 && i != 60 && i != 61 &&
			i != 62 && i != 63 && i != 64 && i != 65 && i != 66 && i != 70 &&
			i != 71 && i != 72 && i != 73 && i != 74 && i != 75 && i != 76 &&
			i != 77 && i != 80 && i != 81 && i != 82 && i != 83 && i != 84 &&
			i != 85 && i != 86 && i != 87 && i != 88)
		{
			putchar(',');
			putchar(' ');
		}
		if (i != 10 && i != 11 && i != 20 && i != 21 && i != 22 && i != 30 &&
			i != 31 && i != 32 && i != 33 && i != 40 && i != 41 && i != 42 &&
			i != 43 && i != 44 && i != 50 && i != 51 && i != 52 && i != 53 &&
			i != 54 && i != 55 && i != 60 && i != 61 && i != 62 && i != 63 &&
			i != 64 && i != 65 && i != 66 && i != 70 && i != 71 && i != 72 &&
			i != 73 && i != 74 && i != 75 && i != 76 && i != 77 && i != 80 &&
			i != 81 && i != 82 && i != 83 && i != 84 && i != 85 && i != 86 &&
			i != 87 && i != 88)
		{
			putchar(j + '0');
			putchar(k + '0');
		}

	}
	putchar('\n');
	return (0);
}