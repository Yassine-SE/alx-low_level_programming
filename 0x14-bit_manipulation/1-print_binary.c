#include "main.h"

/**
 * print_binary - function
 * @n: param
 *
 * Return: 0 success
*/
void print_binary(unsigned long int n)
{
	int bit;
	int x;

	bit = sizeof(unsigned long int) * 8;
	x = 0;
	while (bit)
	{
		bit--;
		if (n & 1L << bit)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}

	if (!x)
		_putchar('0');
}
