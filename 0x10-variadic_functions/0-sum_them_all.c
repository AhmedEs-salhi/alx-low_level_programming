#include "variadic_functions.h"

/**
 * sum_them_all - sums all it's argument)
 *
 * @n: nombre of function's argument
 *
 * Return: 0 if n is 0 or the sum
 *		of the argument otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	int var, sum;
	va_list argument;
	unsigned int i;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		var = va_arg(argument, int);
		sum += var;
	}

	va_end(argument);

	return (sum);

}
