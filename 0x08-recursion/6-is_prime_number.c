#include <stdio.h>
#include "main.h"

/**
 * _prime_number - function that make sure if a n
 *                is a prime number or not
 * @n: the number we want to see if it is a prime
 *     number or not
 * @i: the iterate integer
 * Return: 1 if the n is prime and 0 if it is not
 */

int _prime_number(int n, int i)
{

	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (i % n == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_number(n, i + 1));
	}
}

/**
 * is_prime_number - check if the number is prime or not
 * @n: the number we want to be checked
 * Description: return 1 if the number is prime or it return
 *              0 if the number is not prime
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (_prime_number(n, 2));
}
