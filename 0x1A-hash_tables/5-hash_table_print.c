#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - prints  ahash table
 * @ht: pointer to the hahs table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		while (current != NULL)
		{
			printf("Array[%lu]: ", i);
			printf("Key: %s, Value: %s\n", current->key, current->value);
			current = current->next;
		}
	}
}
