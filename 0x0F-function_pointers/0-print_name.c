#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - is used to print a name
 * @name: is the name to be printed
 * @f: is afunction pointr
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
