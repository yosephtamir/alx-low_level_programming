#include <stdio.h>
#include "main.h"
/**
 * main - is used to print the number of arguments
 *
 * @argc: is the number of an array argv
 * @argv: is an array containing the name and NULL
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < (argc - 1) && *argv[i] != '\0')
		++i;
	printf("%d\n", i);
	return (0);
}
