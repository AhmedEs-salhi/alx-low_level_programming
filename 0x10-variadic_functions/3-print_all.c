#include "variadic_functions.h"

/**
 * form_int - print int
 *
 * @separator: separate netween arguments
 * @args: arguments entered
 *
 * Returns: nothing
 */

void form_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * form_char - print char
 *
 * @separator: separate between arguments
 * @args: arguments
 *
 * Returns: nothing
 */

void form_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * form_float - print float
 *
 * @separator: separate between arguments
 * @args: arguments
 *
 * Returns: nothing
 */

void form_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * form_string - print string
 *
 * @separator: separat between the arguments
 * @args: arguments
 *
 * Returns: nothing
 */

void form_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - print all the arguments according
 *		to their types
 * @format: the format string
 *
 * Returns: nothing
 */

void print_all(const char * const format, ...)
{
	int j;
	char *separator = "";
	int i = 0;

	va_list args;

	token_t tokens[] = {
		{"c", form_char},
		{"f", form_float},
		{"i", form_int},
		{"s", form_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
