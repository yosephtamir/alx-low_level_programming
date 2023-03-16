#include "lists.h"
/**
 * add_dnodeint - is used to add a value to head
 *
 * @head: is the head where the value is added to;
 * @n: is the number to be added.
 * Return: the added number
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
