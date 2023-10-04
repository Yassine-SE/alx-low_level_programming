#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: param
 * @c: param
 *
 * Return: 0 success
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size < 1)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
