#include "main.h"

/**
 * _strspn - function
 * @s: param
 * @accept: param
 *
 * Return: 0 success
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
				break;
			}
		}
	}
	count++;
	return (count);
}
