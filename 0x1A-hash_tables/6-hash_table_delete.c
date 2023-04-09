#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - is used to free hash table
 * @ht: is the hash table to be deleted
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hashNode = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while(ht->array[i] != NULL)
			{
				hashNode = ht->array[i];
				free(hashNode->key);
				free(hashNode->value);
				ht->array[i] = ht->array[i]->next;
				free(hashNode);
			}
		}
	}
	free(ht->array);
	free(ht);
}
