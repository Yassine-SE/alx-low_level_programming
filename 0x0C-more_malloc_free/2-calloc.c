#include "main.h"
#include "stdlib.h"

/**
 * _calloc - function
 * @nmemb: param
 * @size: param
 *
 * Return: 0 success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb < 1 || size < 1)
		return (NULL);

	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = '0';
	}

	return (arr);
}
