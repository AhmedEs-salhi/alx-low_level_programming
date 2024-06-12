#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print function
 * @h: head pointer
 *
 * Description: function that prints a doubly
 *		linked list content
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cpt;

	cpt = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
