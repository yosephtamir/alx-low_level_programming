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
	hash_table_t *creatHash = NULL;
	hash_node_t **creatNode = NULL;


	if (size == 0)
		return (NULL);

	creatHash = malloc(sizeof(hash_table_t));

	if (creatHash == NULL)
		return (NULL);

	creatNode = malloc(sizeof(hash_node_t *) * size);

	if (creatNode == NULL)
		return (NULL);

	creatHash->size = size;
	creatHash->array = creatNode;

	return (creatHash);
}
