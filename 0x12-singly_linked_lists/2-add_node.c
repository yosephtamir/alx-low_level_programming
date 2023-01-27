#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: har or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cop;
	int dher;
	list_t *har;

	har = malloc(sizeof(list_t));
	if (har == NULL)
		return (NULL);

	cop = strdup(str);
	if (cop == NULL)
	{
		free(har);
		return (NULL);
	}

	for (dher = 0; str[dher];)
		dher++;

	har->str = cop;
	har->len = dher;
	har->next = *head;

	*head = har;

	return (har);
}
