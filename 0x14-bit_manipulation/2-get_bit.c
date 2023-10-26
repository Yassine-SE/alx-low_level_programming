#include "main.h"

/**
 * get_bit - function
 * @n: param
 * @index: param
 *
 * Return: 0 success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int y, x;
	unsigned int b = 0;

	b = (sizeof(unsigned long int) * 8 - 1);
	if (index > b)
		return (-1);

	y = 1 << index;
	x = n & y;
	if (x == y)
		return (1);

	return (0);
}
