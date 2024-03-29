#include "lists.h"
/**
 * add_nodeint_end - function that frees a listint_t list.
 * @head: double pointer to the first member
 * @n: int to store in n member of new listint_s struct
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *prev_tail = *head;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;

	if (!*head)
		*head = new_n;
	else
	{
		while (prev_tail->next)
			prev_tail = prev_tail->next;

		prev_tail->next = new_n;
	}
	return (new_n);
}
