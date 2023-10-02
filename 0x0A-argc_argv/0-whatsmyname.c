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
	char *name = argv[0];

	if (0 < argc)
	{
		printf("%s\n", name);
	}
	return (0);
}
