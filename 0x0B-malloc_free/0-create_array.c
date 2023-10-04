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

	arr = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
