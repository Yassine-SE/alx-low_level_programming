#include "main.h"

/**
 * _memset - function
 * @s: param
 * @b: param
 * @n: param
 *
 * Return: 0 success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}