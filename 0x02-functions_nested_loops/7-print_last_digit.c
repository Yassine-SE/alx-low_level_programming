#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: digit
 *
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
