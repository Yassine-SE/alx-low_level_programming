#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0 is success
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
