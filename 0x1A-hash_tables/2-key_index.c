#include "hash_tables.h"

/**
 * key_index - function gives the index of a variable @key
 *
 * @key: the key given
 * @size: the size of the hash table
 *
 * Return: the index of the @key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2Hash;

	djb2Hash = hash_djb2(key);
	return (djb2Hash % size);
}
