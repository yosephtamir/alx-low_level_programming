#include "lists.h"

/**
 * sum_listint - returns the sum)
 * @head: pointer to the first member
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}

	if (!temp->next)
		sum += temp->n;

	return (sum);
}
