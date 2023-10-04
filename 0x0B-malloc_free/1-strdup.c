#include "main.h"
#include "stdlib.h"

/**
 * _strdup - function
 * @str: param
 *
 * Return: 0 success
*/
char *_strdup(char *str)
{
	int i, len = 0;
	char *s;

	if (!str)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	s[i] = '\0';
	return (s);
}
