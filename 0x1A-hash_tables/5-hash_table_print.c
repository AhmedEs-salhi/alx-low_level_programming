#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char f;

	f = 0;
	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			f = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
