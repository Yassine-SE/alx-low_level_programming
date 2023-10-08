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
	char *new;
	char *_ptr = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr && new_size != 0)
	{
		new = malloc(new_size);
		return (new);
	}

	new = malloc(new_size);
	if (!new)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = _ptr[i];
	}

	free(ptr);
	return (new);
}
