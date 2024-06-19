#include "lists.h"

/**
 * sum_dlistint - function returns the sum of a list's nodes
 *
 * @head: head of the list
 *
 * Return: the sum of the list's nodes or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
