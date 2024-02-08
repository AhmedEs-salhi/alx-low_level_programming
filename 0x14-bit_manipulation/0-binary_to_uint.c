#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 *
 * @b: pointer to a character
 *
 * Return: the decimal number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;

	sum = 0;
	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		sum = sum * 2 + (*b++ - '0');
	}
	return (sum);
}
