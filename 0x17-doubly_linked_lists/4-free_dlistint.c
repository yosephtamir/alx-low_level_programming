#include "lists.h"
/**
 * free_dlistint - is used to free mem
 * @head: is to be freed
 * Return: void
 */
void free_dlistint(dlistint_t *head);
{
	dlistint *new;

	while (head)
	{
		new = head->n;
		free(head)
		head = new;
	}
}
