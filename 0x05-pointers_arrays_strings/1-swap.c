/**
 * swap_int - interchanges the values of two variable
 *
 * @a: is the first value
 *
 * @b: is the second value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
