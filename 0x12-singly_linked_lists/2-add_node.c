#include "lists.h"

/**
 * add_node - function
 * @head: param
 * @str: param
 *
 * Return: 0 success
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int count;

	node = malloc(sizeof(list_t));
	if (!node || !head || !str)
		return (NULL);

	count = 0;
	while (str[count])
		count++;

	node->str = strdup(str);
	node->len = count;
	node->next = *head;
	*head = node;

	return (*head);
}
