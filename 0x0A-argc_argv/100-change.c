#include <stdio.h>
#include <stdlib.h>

/**
 * change - gets the least number
 *
 * @n: coin
 *
 * Return: number of money
 */

int change(int n)
{
	int onefourth, fib, sib, san2, kal, calla2;

	onefourth = 0;
	fib = 0;
	sib = 0;
	san2 = 0;
	kal = 0;
	calla2 = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			onefourth += 1;
		}
		else if (n >= 10)
		{
			n -= 10;
			fib += 1;
		}
		else if (n >= 5)
		{
			n -= 5;
			sib += 1;
		}
		else if (n >= 2)
		{
			n -= 2;
			san2 += 1;
		}
		else
		{
			n -= 1;
			kal += 1;
		}
	}
	calla2 = onefourth + fib + sib + san2 + kal;
	return (calla2);
}

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: length of an array argv
 * @argv: array pointer
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int calla;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		calla = change(atoi(argv[1]));
		printf("%d\n", calla);
	}
	return (0);
}
