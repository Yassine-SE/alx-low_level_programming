#include "main.h"

/**
 * _strchr - function
 * @s: param
 * @c: param
 *
 * Return: 0 success
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
