#include "stdio.h"

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	char l[] = "abcdef";

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 0; l[j] != '\0'; j++)
		putchar(l[j]);
	putchar('\n');
	return (0);
}
