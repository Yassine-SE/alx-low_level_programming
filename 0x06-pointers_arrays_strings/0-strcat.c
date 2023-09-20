#include "main.h"

/**
 * _strcat - check the code
 * @dest: param
 * @src: param
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int len = 0;
	char *destination = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destination[i] = dest[i];
		len++;
	}
	
	for (j = 0; src[j] != '\0'; j++)
	{
		destination[len] = src[j];
		len++;
	}
	return (destination);
}