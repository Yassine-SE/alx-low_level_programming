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
	int i;
	int bit = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	i = 63;
	while (i >= 0)
	{
		x = y > i;
		if (x & 1)
			bit++;
		
		i++;
	}

	return (bit);
}
