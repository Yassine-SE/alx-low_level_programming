#include "lists.h"

/**
 * free_listint - function
 * @head: param
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	free(head);
}
