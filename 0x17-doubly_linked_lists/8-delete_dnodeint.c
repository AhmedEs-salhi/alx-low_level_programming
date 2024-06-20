#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes a node at index
 *
 * @head: the head of the list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head, *toDel;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(curr);
		return (1);
	}

	for (; index != 1; index--)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}

	toDel = curr->next;
	curr->next = toDel->next;
	free(toDel);

	return (1);
}
