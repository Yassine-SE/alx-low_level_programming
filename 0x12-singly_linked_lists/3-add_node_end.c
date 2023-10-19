#include "lists.h"

/**
 * add_node - function
 * @head: param
 * @str: param
 *
 * Return: 0 success
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;
	int count;

	node = malloc(sizeof(list_t));
	if (!node || !head || !str)
		return (NULL);

	count = 0;
	while (str[count])
		count++;

	temp = *head;
	node->str = strdup(str);
	node->len = count;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node;
	return (*head);
}
