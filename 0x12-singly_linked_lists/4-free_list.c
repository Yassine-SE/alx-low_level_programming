#include "lists.h"

/**
 * free_list - function
 * @head: param
 *
 * Return: 0 success
*/
void free_list(list_t *head)
{
	while (head)
	{
		if (head->str)
		{
			free(head);
			free(head->str);
		}

		head = head->next;
	}
}
