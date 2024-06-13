#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * @head: the head of the list
 * @n: the data of the node
 *
 * Return: the addresse of the new element or NULL if failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (!h)
		return (NULL);

	h->n = n;
	h->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = h;
	(*head) = h;

	return (h);
}
