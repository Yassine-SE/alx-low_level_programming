#include "lists.h"

/**
 * listint_len - function
 * @h: param
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
