#include "main.h"

/**
 * _strncat - check the code
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;
	int len = 0, lenSRC = 0;
	char *destination = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destination[i] = dest[i];
		len++;
	}
	for (j = 0; src[j] != '\0'; j++)
		lenSRC++;

	if (n < lenSRC)
		lenSRC = n;

	for ( m = 0; m < lenSRC; m++)
	{
		destination[len] = src[m];
		len++;
	}
	return (destination);
}
