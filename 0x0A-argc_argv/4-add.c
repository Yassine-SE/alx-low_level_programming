#include "main.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * main - function
 * @argc: param
 * @argv: param
 *
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc == 1 && argv != NULL)
	{
		printf("0\n");
	}
	else if (argc > 1 && argv != NULL)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
				add = add + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
