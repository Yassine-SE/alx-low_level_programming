#include "lists.h"

/**
 * add_dnodeint - function
 * @head: param
 * @n: param
 *
 * Return: Always 0.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *h;

	new_n = malloc(sizeof(dlistint_t));
	if (!new_n)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	h = *head;
	new_n->next = h;

	if (h)
		h->prev = new_n;

	*head = new_n;
	return (new_n);
}
