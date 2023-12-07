#include "lists.h"

/**
 * print_dlistint - function
 * @h: param
 *
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return count;
}
