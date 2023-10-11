#include "function_pointers.h"
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
	int num1 , num2;
	int result = 0;
	char *operator;

	if (argc != 3)
		printf("Error\n");
		exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (!get_op_func(operator) || operator[1] != '\0')
		printf("Error\n");
		exit(99);

	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
		printf("Error\n");
		exit(100);

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
