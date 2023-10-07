#include "main.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * string_nconcat - function
 * @s1: param
 * @s2: param
 * @n: param
 *
 * Return: 0 success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j;
	unsigned int len1 = 0, len2 = 0;

	while (s1 && s1[i] != '\0')
		i++;
	len1 = i;

	i = 0;
	while (s2 && s2[i] != '\0')
		i++;
	len2 = i;

	if (len2 <= n)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));
	if (!s)
		return (NULL);

	for (j = 0; j < len1; j++)
		s[j] = s1[j];

	for (i = 0; i < n; i++)
	{
		s[j] = s2[i];
		j++;
	}
	s[j] = '\0';

	return (s);
}
