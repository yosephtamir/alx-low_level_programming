#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - is used to make simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: success or failure
 */

int main(int argc, char *argv[])
{
	int a, b, i;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = operator(a, b);

	printf("%d\n", i);

	return (0);
}
