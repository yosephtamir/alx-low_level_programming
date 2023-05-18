#include "lists.h"
/**
 * insert_dnodeint_at_index - is used to add a value at specified index
 * @h: is the: the linked list
 * @idx: is the value
 * @n: is the index
 * Return: the assigned pointer
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		i = i->next;
		if (i == NULL)
			return (NULL);
	}

	if (i->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = i;
	new->next = i->next;
	i->next->prev = new;
	i->next = new;

	return (new);
}
