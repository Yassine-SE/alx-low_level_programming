#include "main.h"
#include "stdlib.h"

/**
 * str_concat - function
 * @s1: param
 * @s2: param
 *
 * Return: 0 success
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j;
	int len1 = 0;
	int len2 = 0;
	char *s;
	int s_size = 0;

	if (!s1 || !s2)
		return (NULL);

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	s_size = len1 + len2 + 1;
	s = malloc(sizeof(char) * s_size);
	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	for ( j = 0; j < len2; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
