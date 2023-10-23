#include "lists.h"

/**
 * print_listint - function
 * @h: param
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
