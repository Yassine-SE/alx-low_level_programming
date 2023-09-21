#include "main.h"

/**
 * cap_string - function
 * @s: param
 *
 * Return: 0 success
*/
char *cap_string(char *s)
{
	int i, cap = 0;
	char sep[] = {' ', ',', '.', '-', '"', '?', '!', '(', ')', '{', '}', '\n'};

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == '\t')
				s[i] = ' ';
			if (s[i] == sep[j])
			{
				if ('a' <= s[i + 1] && s[i + 1] <= 'z')
					cap = 1;
			}
		}

		if (cap && ('a' <= s[i] && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			cap = 0;
		}
	}
	return (s);
}
