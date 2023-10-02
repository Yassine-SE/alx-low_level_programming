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
	int num1 = (int) argv[1];
	int num2 = (int) argv[2];

	if (argc > 1 && argv != NULL)
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
}
