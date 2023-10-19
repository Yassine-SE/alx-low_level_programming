#include "lists.h"

/**
 * print_list - function
 * @h: param
 *
 * Return: 0 success
*/
size_t print_list(const list_t *h)
{
	size_t n_list = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);

		h = h->next;
		n_list++;
	}

	return (n_list);
}
