#include <stdio.h>
#include "main.h"

/**
 * sqrt2 - give you the permition to iterate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (sqrt2(a, b + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural
 *                   square root of n
 * @n: Number Integer that we want to calculate his square root
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

