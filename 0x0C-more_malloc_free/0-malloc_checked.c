#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - function
 * @b: param
 *
 * Return: 0 success
*/
void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);
	if (!r)
		return (NULL);

	return (r);
}
