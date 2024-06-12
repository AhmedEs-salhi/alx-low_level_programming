#include "lists.h"

/**
 * dlistint_len - doubly linked list length function
 * @h: doubly linked list head pointer
 *
 * Description: a function that returns the number
 *		of elements (length) of a doubly
 *		linked list
 *
 * Return: the number of elements of the doubly
 *		linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cpt;

	cpt = 0;
	while (h)
	{
		cpt++;
		h = h->next;
	}
	return (cpt);
}
