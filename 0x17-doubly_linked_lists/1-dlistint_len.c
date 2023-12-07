#include "lists.h"

/**
 * dlistint_len - function
 * @h: param
 *
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
