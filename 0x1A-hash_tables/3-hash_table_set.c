#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Is used to set a value
 * @ht: is a hash table struct
 * @key: is the key of the table
 * @value: value to be set
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *hashSet = NULL;
	hash_node_t *collNode = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	i = key_index((unsigned char *) key, ht->size);
	hashSet = ht->array[i];

	if (hashSet && strcmp(key, hashSet->key) == 0)
	{
		free(hashSet->value);
		hashSet->value = strdup(value);
		return (1);
	}
	collNode = malloc(sizeof(hash_node_t));
	if (collNode == NULL)
		return (0);


	collNode->key = strdup(key);
	collNode->value = strdup(value);
	collNode->next = ht->array[i];
	ht->array[i] = collNode;
	return (1);
}
