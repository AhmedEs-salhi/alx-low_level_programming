#include "variadic_functions.h"

/**
 * print_strings - prints all it's arguments
 *
 * @separator: separate between the arguments
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *result;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, char*);
		if (result != NULL)
		{
			printf("%s", result);
		}
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		else if (separator == NULL)
			continue;
	}
	va_end(args);
	printf("\n");
}
