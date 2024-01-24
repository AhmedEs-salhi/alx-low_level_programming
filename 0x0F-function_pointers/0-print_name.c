#include <stdio.h>

/**
 * print_name - print a name
 *
 * @name: the name want to print it
 * @f: pointer to the a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
