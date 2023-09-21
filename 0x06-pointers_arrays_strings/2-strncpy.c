#include "main.h"

/**
 * _strncpy - check the code
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: 0 success
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, m;
	int lenSrc = 0;
	char *destination = dest;

	for (i = 0; src[i] != '\0'; i++)
		lenSrc++;

	for (m = 0; dest[m] != '\0' ; m++)
	{
		if (m <= n && n < lenSrc)
		{
			if (m == n)
				break;
			destination[m] = src[m];
		}
		else if (m <= lenSrc && lenSrc < n)
		{
			if (m < lenSrc)
				destination[m] = src[m];
			else
			{
				destination[m] = '\0';
				break;
			}
		}
	}
	return (destination);
}
