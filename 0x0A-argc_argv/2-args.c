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
	int i;

	if (argc >= 0 && argv != NULL)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
