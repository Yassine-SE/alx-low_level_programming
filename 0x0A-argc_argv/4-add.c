#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: param
 * @argv: param
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (atoi(argv[i]) != 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
