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
	hash_node_t *current, *new;
	unsigned long int idx;

	if (!key || !value || !ht)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->value = strdup(value);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
