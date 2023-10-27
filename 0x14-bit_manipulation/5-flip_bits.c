#include "main.h"

/**
 * flip_bits - function
 * @n: param
 * @m: param
 *
 * Return: 0 success
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit, i;
	unsigned long int x, y;

	y = n ^ m;
	bit = 0;
	i = 63;
	while (i >= 0)
	{
		x = y >> i;
		if (x & 1)
			bit++;

		i--;
	}

	return (bit);
}
