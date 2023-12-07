#include "lists.h"

/**
 * print_dlistint - function
 * @h: param
 *
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;
    int count = 0;

    while (i)
    {
        if (h->next)
        {
            printf("%d\n", h->n);
            count++;
        }
        else
        {
            i = -1;
        }
        i++;
    }
    return count;
}
    