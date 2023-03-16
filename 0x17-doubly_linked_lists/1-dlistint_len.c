#include "lists.h"
/**
 * dlistint_len - is used to count number of lists
 * @h: is the list
 * dlistint_t: is the struct
 * Return: node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;

		h = h->next;
	}
	return (node);
}
