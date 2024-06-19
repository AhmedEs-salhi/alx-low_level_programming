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
	dlistint_t *curr = *h, *toAdd;

	if (*h == NULL || idx > dlistint_len(*h) + 1)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	toAdd = malloc(sizeof(dlistint_t));
	if (toAdd == NULL)
		return (NULL);

	toAdd->n = n;
	toAdd->next = curr->next;
	toAdd->prev = curr;
	curr->next->prev = toAdd;
	curr->next = toAdd;
	return (toAdd);
}

