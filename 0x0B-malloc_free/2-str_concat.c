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
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *s;
	int s_size = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	s_size = len1 + len2 + 1;
	s = malloc(sizeof(char) * s_size);
	if (!s)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		s[i] = s2[j];
		i++;
	}

	if (len1 == 0 && len2 == 0)
		i = 1;
	
	s[i] = '\0';
	return (s);
}
