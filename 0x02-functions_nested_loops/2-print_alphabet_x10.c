#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: 0 Success
 */
void print_alphabet_x10(void)
{
	int a, i;

	i = 0;
	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
