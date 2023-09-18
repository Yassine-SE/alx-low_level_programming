#include "main.h"

/**
 * print_rev - check the code
 * @s: param
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	if (count != 0)
	{
		for (j = count; j >= 0 ; j--)
		{
			_putchar(s[j]);
		}
	}
	_putchar('\n');
}
