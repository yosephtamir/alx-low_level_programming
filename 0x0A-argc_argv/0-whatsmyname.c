#include <stdio.h>
#include "main.h"
/**
 * main - is used to print the name of the file
 *
 * @argc: is the number of an array argv
 * @argv: is an array containing the name and NULL
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc <= 1)
		printf("%s\n", argv[i]);
	return (0);
}
