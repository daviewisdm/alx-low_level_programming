#include "hash_tables.h"
/**
 * key_index - gets the index of the key
 * @key: key
 * @size: size of a hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
