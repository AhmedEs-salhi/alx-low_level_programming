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
	unsigned int i, sum, len;

	len = _strlen(b);
	sum = 0;

	if (!b)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (*(b + i) == '1')
			sum += power(2, ((len - i) - 1));
		else if (*(b + i) != '0')
			return (0);

	}
	return (sum);
}
