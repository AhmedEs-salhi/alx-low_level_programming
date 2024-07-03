#include "hash_tables.h"

int main()
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "f", "0");
	hash_table_set(ht, "e", "1");
	hash_table_set(ht, "h", "2");
	hash_table_set(ht, "b", "3");
	hash_table_set(ht, "c", "4");
	hash_table_set(ht, "d", "5");
	hash_table_set(ht, "a", "6");
	hash_table_print(ht);

	return (EXIT_SUCCESS);

}
