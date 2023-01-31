#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head
 * Return: numbers of node or 0
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 1;

	if (h)
	{
		printf("%i\n", h->n);

		if (h->next)
			i += print_listint(h->next);

		return (i);
	}
	else
		return (0);
}
