#include "3-calc.h"
#include <stdio.h>
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
	int a, b;
	int result = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = (*get_op_func(argv[2]))(a, b);
	}

	printf("%d\n", result);
	return (0);
}
