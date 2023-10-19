#include "lists.h"

/**
 * list_len - function
 * @h: param
 *
 * Return: 0 success
*/
size_t list_len(const list_t *h)
{
	size_t n_list = 0;

	while (h)
	{
		h = h->next;
		n_list++;
	}

	return (n_list);
}
