#include "main.h"

print_alphabet();

/**
 * main - print alphabet
 *
 * Return: 0 is success
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i = 'a';

	while (i != 'z')
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
