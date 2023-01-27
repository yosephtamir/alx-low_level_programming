#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints list_t
 * @h: The number
 *
 * Return: .
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
