#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Is used to set a value
 * @ht: is a hash table struct
 * @key: is the key of the table
 * * Return: int
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *hashTake = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);
	hashTake = ht->array[i];

	while (hashTake != NULL)
	{
		if (strcmp(key, hashTake->key) == 0)
			return (hashTake->value);
		hashTake = hashTake->next;
	}
	return (NULL);
}
