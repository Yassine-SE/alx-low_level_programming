#include "stdio.h"

/**
 * main - Print numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
