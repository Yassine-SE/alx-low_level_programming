#include "main.h"

/**
 * _strcmp - function
 * @s1: param
 * @s2: param
 *
 * Return: 0 success
*/
int _strcmp(char *s1, char *s2)
{
	int i, cmp = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			cmp = 0;
		else if (s1[i] > s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
		else
		{
			cmp = s1[i] - s2[i];
			break;
		}
	}
	return (cmp);
}
