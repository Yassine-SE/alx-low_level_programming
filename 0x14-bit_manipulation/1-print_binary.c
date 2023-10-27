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
	while (bit)
	{
		if (n & 1L << --bit)
		{
			x = 1;
			_putchar('1');
		}
		else if (x)
			_putchar('0');
	}

	if (!x)
		_putchar('0');
}
