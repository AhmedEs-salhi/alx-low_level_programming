#include "main.h"

/**
 * power - calculate number power
 *	of another
 *
 * @base: the base
 * @expo: the exposant
 *
 * Return: the number powerd of
 */

unsigned int power(int base, int expo)
{
	unsigned int prod;
	int i;

	prod = 1;
	for (i = 0; i < expo; i++)
	{
		prod *= base;
	}

	return (prod);
}
