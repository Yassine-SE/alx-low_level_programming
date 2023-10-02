#include "main.h"
#include "stdio.h"

/**
 * main - function
 * @argc: param
 * @argv: param
 *
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	if (argc >= 0 && argv != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
