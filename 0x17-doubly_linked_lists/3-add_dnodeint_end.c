#include "lists.h"

/**
 * add_dnodeint_end - function adds an element at the end
 *
 * @head: the head of the doubly linked list
 * @n: the data of the node to add at the end
 *
 * Return: the address of the new element or NULL if it failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *ptr;

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(dlistint_t));
		if (!*head)
			return (NULL);

		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;

		return (*head);
	}
	else
	{
		tmp = (*head);
		while (tmp->next)
			tmp = tmp->next;

		ptr = malloc(sizeof(dlistint_t));
		if (!ptr)
			return (NULL);

		tmp->next = ptr;
		ptr->n = n;
		ptr->prev = tmp;
		ptr->next = NULL;

		return (ptr);
	}
}
