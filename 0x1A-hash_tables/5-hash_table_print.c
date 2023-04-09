#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
  * hash_table_print - prints a contents of a hash table
  * @ht: the table to be printed
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hashNode = NULL;
	unsigned long int i, j = 0;

	if (ht != NULL)
	{

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hashNode = ht->array[i];

		while (hashNode)
		{
			if (j != 0)
				printf(", ");
			j++;
			printf("'%s': '%s'", (char *) hashNode->key,
					(char *) hashNode->value);

			hashNode = hashNode->next;
		}
	}

	printf("}\n");
	}
}
