#include "hash_tables.h"

/**
 * hash_table_get - function retreives a value associated to a key
 * @ht: the hash table
 * @key: the key wanting to retrieve its value
 *
 * Return: the value associated or NULL if it failed
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || !ht || !ht->array || !strlen(key) || !ht->size)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
