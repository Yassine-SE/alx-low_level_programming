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

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	(*head) = node;

	return (node);
}
