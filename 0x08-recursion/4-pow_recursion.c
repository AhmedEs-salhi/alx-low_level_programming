#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function that return the
 *                  value of number raised to
 *                  the power of an other
 * @x: first input parametre
 * @y: seconde inputs parametre
 * Description: return -1 if y is less than 0
 * Return: return the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	_putchar('\n');
}
