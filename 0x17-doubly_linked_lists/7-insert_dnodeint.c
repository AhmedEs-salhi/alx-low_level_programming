#include "lists.h"

/**
 * insert_dnodeint_at_index - function add a node at a given index
 *
 * @h: the head of the list
 * @idx: the given index
 * @n: the data of the node
 *
 * Return: the address of the node or NULL if impossible to add one
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *one, *two, *toAdd;
	unsigned int cpt;

	if (!h || idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		add_dnodeint(h, n);

	if (idx == dlistint_len(*h))
		add_dnodeint_end(h, n);

	two = *h;
	cpt = 0;
	while (two->next)
	{
		one = two;
		two = two->next;
		cpt++;
		if (idx == cpt)
		{
			toAdd = malloc(sizeof(dlistint_t));
			one->next = toAdd;
			toAdd->prev = one;
			toAdd->next = two;
			two->prev = toAdd;
			toAdd->n = n;
			return (toAdd);
		}
	}
}
