#include "main.h"
#include "stdlib.h"

/**
 * argstostr - function
 * @ac: param
 * @av: param
 *
 * Return: 0 success
*/
char *argstostr(int ac, char **av)
{
	char *arr;
	int i, j;
	int aloc = 0, count = 0;

	if (ac == 0 || !av)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			aloc++;
	}
	aloc = aloc + ac;

	arr = malloc(sizeof(char) * aloc + 1);
	if (!arr)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[count++] = av[i][j];
		}

		if (arr[count] == '\0')
			arr[count++] = '\n';
	}
	arr[count] = '\0';
	return (arr);
}
