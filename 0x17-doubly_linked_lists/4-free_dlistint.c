#include "lists.h"

/**
 * free_dlistint - function
 * @head: param
 *
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
