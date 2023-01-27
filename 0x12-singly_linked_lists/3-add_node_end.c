#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: head or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cop;
	int dher;
	list_t *har, *dhu;

	har = malloc(sizeof(list_t));
	if (har == NULL)
		return (NULL);

	cop = strdup(str);
	if (str == NULL)
	{
		free(har);
		return (NULL);
	}

	for (dher = 0; str[dher];)
		dher++;

	har->str = cop;
	har->len = dher;
	har->next = NULL;

	if (*head == NULL)
		*head = har;

	else
	{
		dhu = *head;
		while (dhu->next != NULL)
			dhu = dhu->next;
		dhu->next = har;
	}

	return (*head);
}
