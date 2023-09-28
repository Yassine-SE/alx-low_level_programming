#include "main.h"

/**
 * _strlen_recursion - function
 * @s: param
 *
 * Return: 0 success
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!*s)
		return (0);

	i++;
	i += _strlen_recursion(s + 1);
	return (i);
}
