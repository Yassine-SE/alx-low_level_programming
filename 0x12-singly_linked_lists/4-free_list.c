#include "lists.h"

/**
 * free_list - function
 * @head: param
 *
 * Return: 0 success
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		if (head->str)
		{
			free(head);
			free(head->str);
		}
		head = tmp;
	}
}
