#include <stdio.h>
#include "main.h"
/**
 * main - is used to print all arguments it recieves
 *
 * @argc: is the number of an array argv
 * @argv: is an array containing the name and NULL
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		++i;
	}
	return (0);
}
