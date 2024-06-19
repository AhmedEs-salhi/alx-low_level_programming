#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node
 *
 * @head: the head of the list
 * @index: the index of the node starting from 0
 *
 * Return: the nth node or NULL if the node does not exist
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cpt = 0;

	while (head)
	{
		if (index == cpt)
			return (head);
		head = head->next;
		cpt++;
	}
	return (NULL);
}
