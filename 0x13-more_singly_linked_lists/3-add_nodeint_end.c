#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: param
 * @n: param
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));
	if (!node || !temp)
		return (NULL);

	temp = *head;
	node->n = n;
	node->next = NULL;

	while (temp)
		temp = temp->next;

	temp->next = node;
	return (node);
}
