#include "lists.h"

/**
 * sum_listint - function
 * @head: param
 *
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
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
