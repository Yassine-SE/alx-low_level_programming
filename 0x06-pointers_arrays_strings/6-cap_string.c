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
	char sep[] = {' ', ',', ';', '.', '"', '?', '!', '(', ')', '{', '}', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			int j;

			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i - 1] == sep[j])
					s[i] -= 32;
			}
		}
		
	}
	return (s);
}
