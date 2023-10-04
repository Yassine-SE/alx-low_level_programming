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
	int i, j, b, c;
	int count = 0;

	if (ac == 0 || !av)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			j++;
	}
	j = j + ac;

	arr = malloc(sizeof(char) * j + 1);
	if (!arr)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			arr[count] = av[b][c];
			count++;
		}

		if (arr[count] == '\0')
			arr[count++] = '\n';
	}
	arr[count] = '\0';
	return (arr);
}
