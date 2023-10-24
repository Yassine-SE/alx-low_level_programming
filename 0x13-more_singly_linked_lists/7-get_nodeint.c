#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: param
 * @index: param
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp)
	{
		if (count < index)
			break;

		temp = temp->next;
		count++;
	}

	if (temp)
		return (temp);
	else
		return (NULL);
}
