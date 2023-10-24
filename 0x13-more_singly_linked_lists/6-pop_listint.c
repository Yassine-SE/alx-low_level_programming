#include "lists.h"

/**
 * pop_listint - function
 * @head: param
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
