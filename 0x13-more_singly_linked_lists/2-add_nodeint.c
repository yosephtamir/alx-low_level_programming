#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the first member
 * @n: int to store in n member of new listint_s struct
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
