#include "sorted_hash_tables.h"

/**
 * shash_table_create - function that create a hash table
 * @size: the size of the hash table
 * 
 * Return: the pointer of the hash table created
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *sht;
    unsigned long int i;

    if (!size)
        return (NULL);

    sht = malloc(sizeof(shash_table_t));
    if (!sht)
        return (NULL);

    sht->size = size;
    sht->array = malloc(sizeof(shash_node_t *) * size);
    if (!sht->array)
    {
        free(sht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        sht->array[i] = NULL;

    return (sht);
}