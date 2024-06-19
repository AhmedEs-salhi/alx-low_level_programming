#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 *
 * @head: the head of the list
 *
 * Return: nothing
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
