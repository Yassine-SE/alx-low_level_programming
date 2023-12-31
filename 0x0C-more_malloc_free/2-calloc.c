#include "main.h"
#include "stdlib.h"

/**
 * _memset - function
 * @s: param
 * @c: param
 * @n: param
 *
 * Return: 0 success
*/
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;

	return (s);
}

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

	if (nmemb == 0 || size  == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (!arr)
		return (NULL);

	_memset(arr, 0, nmemb * size);
	return (arr);
}
