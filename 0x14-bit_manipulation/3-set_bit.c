#include "main.h"

/**
 * set_bit - function
 * @n: param
 * @index: param
 *
 * Return: 0 success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;
	unsigned int b = 0;

	b = (sizeof(unsigned long int) * 8 - 1);
	if (index > b)
		return (-1);

	set = 1 << index;
	return (1);
}
