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
	unsigned int num1 = atoi(argv[1]);
	unsigned int num2 = atoi(argv[2]);

	if (argc > 1 && argv != NULL)
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
