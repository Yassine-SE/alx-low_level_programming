#include "main.h"
#include "stdlib.h"

/**
 * _realloc - function
 * @ptr: param
 * @old_size: param
 * @new_size: param
 *
 * Return: 0 success
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (!new)
		return (NULL);

	return (new);
}
