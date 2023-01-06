#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is used to multiply two numbers
 *
 * @argc: is the length of an array argv
 * @argv: is the argument variable
 *
 * Return: 0 if success or 1 if error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

