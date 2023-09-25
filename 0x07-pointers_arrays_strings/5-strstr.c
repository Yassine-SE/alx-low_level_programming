#include "main.h"

/**
 * _strstr - function
 * @haystack: param
 * @needle: param
 *
 * Return: 0 success
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (&haystack[j]);
			}
		}
	}
	return (0);
}
