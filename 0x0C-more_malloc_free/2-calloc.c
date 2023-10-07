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
	int *arr;

	if (nmemb < 1 || size < 1)
		return (NULL);

	arr = malloc(size * nmemb);
	if (!arr)
		return (NULL);

	return (arr);
}
