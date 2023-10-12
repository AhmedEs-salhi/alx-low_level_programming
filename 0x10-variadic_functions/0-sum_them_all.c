#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of a variable numbers
 *
 * @n: the number of arguments
 *
 * Return: 0 if n = 0 or the sum otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

