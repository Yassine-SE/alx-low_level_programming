#include "stdio.h"

/**
 * main - Print alphabet
 *
 * Description: Print alphabet in lower and upper case with puchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 2; i++)
		for (j = 0; alphabet[j] != '\0'; j++)
			if (i == 0)
				putchar(alphabet[j]);
			else
				putchar(alphabet[j] - 32);
	putchar('\n');
	return (0);
}
