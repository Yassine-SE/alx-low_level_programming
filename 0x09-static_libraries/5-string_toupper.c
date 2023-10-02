#include "main.h"

/**
 * string_toupper - function
 * @s: param
 *
 * Return: 0 success
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
