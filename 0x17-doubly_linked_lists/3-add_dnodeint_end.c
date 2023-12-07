#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: param
 * @n: param
 *
 * Return: Always 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	h = *head;

	while (h)
		h = h->next;

	h->next = new_n;
	*head = new_n;
	new->prev = h;
	return (new_n);
}
