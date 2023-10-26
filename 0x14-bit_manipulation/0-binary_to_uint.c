#include "main.h"

/**
 * binary_to_uint - function
 * @b: param
 *
 * Return: 0 success
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int un_int;
	int i;

	un_int = 0;
	if (!b)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = 0;
	while (b[i] != '\0')
	{
		un_int <<= 1;
		if (b[i] == '1')
			un_int += 1;
		i++;
	}
	return (un_int);
}
