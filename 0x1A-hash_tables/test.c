#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c, i;

	hash = 5381;
	i = 1;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

int main()
{
	int c = 5381;
	int shift = c << 5;
	unsigned long int result = hash_djb2("Don't forget to tweet today");

	printf("%ld mod 1024 = %d\n", result, result % 1024);

	return 0;
}
