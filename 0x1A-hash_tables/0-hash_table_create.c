#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - is used to create a new hash table
 * @size: is the size of the table to be created
 * Return: hash_table_t struct
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *createHash = NULL;
	hash_node_t **createNode = NULL;
	unsigned long int i;


	if (size == 0)
		return (NULL);

	createHash = malloc(sizeof(hash_table_t));

	if (createHash == NULL)
		return (NULL);

	createNode = malloc(sizeof(hash_node_t *) * size);

	if (createNode == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		createNode[i] = NULL;

	createHash->size = size;
	createHash->array = createNode;
	return (createHash);
}
