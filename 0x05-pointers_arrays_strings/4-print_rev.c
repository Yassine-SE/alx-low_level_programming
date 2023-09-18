#include "main.h"

/**
 * print_rev - check the code
 * @s: param
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int j, count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (j = count; j > 0 ; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
