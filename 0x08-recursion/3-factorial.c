#include <stdio.h>
#include "main.h"

/**
 * factorial - function that return the factorial of a given number
 * @n: number we want to calculate its factorial
 * Return: return the factorial of the number n
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	_putchar('\n');
}
