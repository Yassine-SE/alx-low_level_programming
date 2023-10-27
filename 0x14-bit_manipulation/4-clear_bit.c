#include "main.h"

/**
 * clear_bit - function
 * @n: param
 * @index: param
 *
 * Return: 0 success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	x = sizeof(n) * 8;
	if (index > x)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
