#include "hash_tables.h"
/**
 * key_index - is used to give an index of a key
 * @key: is the key to be assigned
 * @size: is the size of the list
 * Return: the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
