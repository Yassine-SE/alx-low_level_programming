#include "main.h"

/**
 * cap_string - function
 * @s: param
 *
 * Return: 0 success
*/
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\t')
			s[i] = ' ';
			
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' ||
		s[i] == '.' || s[i] == '"' || s[i] == '?' ||
		s[i] == '!' || s[i] == '(' || s[i] == ')' ||
		s[i] == '{' || s[i] == '}' || s[i] == '\n' ||
		s[i] == '\t')
		{
			if ('a' <= s[i + 1] && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}
	return (s);
}
