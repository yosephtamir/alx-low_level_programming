#include "lists.h"

/**
 * free_listint - frees memory previously allocated
 * @head: pointer to the first member of a singly linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
