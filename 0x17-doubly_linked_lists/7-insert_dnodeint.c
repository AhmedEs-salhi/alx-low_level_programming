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

	else if (idx == 0)
		add_dnodeint(h, n);

	else if (idx == dlistint_len(*h)) 
		add_dnodeint_end(h, n);
	else
	{
		curr = *h;
		prv = NULL;
		cpt = 0;
		while (curr->next)
		{
			prv = curr;
			curr = curr->next;
			cpt++;
			if (idx == cpt)
			{
				toAdd = malloc(sizeof(dlistint_t));
				prv->next = toAdd;
				toAdd->prev = prv;
				toAdd->next = curr;
				curr->prev = toAdd;
				toAdd->n = n;
			}
		}
	}
	return toAdd;
}
