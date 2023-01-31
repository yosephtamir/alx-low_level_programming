#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head
 * Return: number of nodes or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 1;

	if (h)
	{
		if (h->next)
			i += listint_len(h->next);

		return (i);
	}
	else
		return (0);
}
