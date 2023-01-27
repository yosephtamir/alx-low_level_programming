#include <stdio.h>

void __attribute__((constructor)) _print(void);

/**
 * _print - Prints a string before the You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n before the main function is executed.
 */
void _print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
