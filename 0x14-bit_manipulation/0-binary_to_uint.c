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

	for (i = 0; b[i] != '\0'; i++)
	{
		un_int <<= 1;
		if (b[i] == '1')
			un_int += 1;
	}
	return (un_int);
}
