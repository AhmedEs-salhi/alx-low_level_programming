#include "hash_tables.h"

/**
 * hash_table_create - function that creats a hash table
 * @size: size of the hash table wanting to creat
 *
 * Return: pointer to the hash table or NULL if the function is failed
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	return (table);
}
