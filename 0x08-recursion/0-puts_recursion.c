#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that print
 *                   a string followed by
 *                   a new line
 *
 * @s: the string wants to be printed
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
