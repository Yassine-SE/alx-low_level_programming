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
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}
