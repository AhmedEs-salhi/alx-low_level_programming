#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - reverse a string
 * @s: string want to be printed
 * Description: print a string in the
 *              revers order
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
