#include "main.h"

/**
 * _strlen - calculate the length
 *	of a string
 *
 * @s: string want to calculate its length
 *
 * Return: the length
 */

unsigned int _strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;

	return (i);
}
