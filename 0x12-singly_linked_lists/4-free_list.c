#include "lists.h"

/**
 * free_list - function
 * @head: param
 *
 * Return: 0 success
*/
void free_list(list_t *head)
{

	if (!head)
		return (NULL);

	while (head->next)
	{
		if (head->str)
			free(head->str);

		head->next;
	}

	return (*head);
}
