#include "variadic_functions.h"

/**
 * print_numbers - print it's argument
 *
 * @separator: separate between each argument
 * @n: number of argument
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
