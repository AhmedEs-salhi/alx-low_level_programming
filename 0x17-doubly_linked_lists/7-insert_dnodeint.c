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
	dlistint_t *prv, *curr, *toAdd;
	unsigned int cpt;

	if (*h == NULL || idx > dlistint_len(*h) + 1)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h)) 
		return (add_dnodeint_end(h, n));

	curr = (*h)->next;
	prv = (*h);
	cpt = 1;
	toAdd = malloc(sizeof(dlistint_t));

	if (toAdd == NULL)
		return (NULL);

	while (curr->next)
	{
		if (idx == cpt)
		{
			prv->next = toAdd;
			toAdd->prev = prv;
			toAdd->next = curr;
			curr->prev = toAdd;
			toAdd->n = n;
		}
		prv = curr;
		curr = curr->next;
		cpt++;
	}

	return (toAdd);
}

