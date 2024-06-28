#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table
 * @ht: the hash table which add the key:value to
 * @key: the key to be added
 * @value: the value correpending to the @key
 *
 * Return: 1 when succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t node;
	unsigned long int idx;

	idx = key_index(key, ht->size);
	if (!key)
		return (0);

	if (ht->array[idx] == NULL)
	{
		strcpy(ht->array[idx]->key, key);
		strcpy(ht->array[idx]->value, value);
		ht->array[idx]->next = NULL;
		return (1);
	}
	if (ht->array[idx] != NULL)
	{
		ht->array[idx]->next = malloc(sizeof(hash_node_t));
		if (!ht->array[idx]->next)
			return (0);

		strcpy(ht->array[idx]->next->key, key);
		strcpy(ht->array[idx]->next->value, value);
		ht->array[idx]->next->next = NULL;
		return (1);
	}
}
