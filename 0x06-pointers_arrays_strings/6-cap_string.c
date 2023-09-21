#include "main.h"

/**
 * cap_string - function
 * @s: param
 *
 * Return: 0 success
*/
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = {' ', ',', ';', '.', '"', '?', '!', '(', ')',
	'{', '}', '\n', '\t'};

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] || i == 0)
				s[i] -= 32;
		}
		j = 0;
		i++;
	}
	return (s);
}
