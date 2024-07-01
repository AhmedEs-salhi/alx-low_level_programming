#include "hash_tables.h"

/**
 * hash_table_delete - function that delete/free a hash table
 *
 * @ht: the hash table to be deleted/freed
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		next = ht->array[i];
		if (next != NULL)
		{
			while (next->next)
			{
				current = next;
				next = next->next;
				free(current->key);
				free(current->value);
				free(current);
			}
			free(next->key);
			free(next->value);
			free(next);
		}
	}
	free(ht->array);
	free(ht);
}
