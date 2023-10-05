#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *creat_array - creat an array of chars
 *                and intitalizes with a specefic
 *                character
 * @size: the size of the array
 * @c: the special character
 *
 * Return: a pointer if success or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
