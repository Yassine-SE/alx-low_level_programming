#include "main.h"

/**
 * create_array - function
 * @size: param
 * @c: param
 *
 * Return: 0 success
*/
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	arr = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
