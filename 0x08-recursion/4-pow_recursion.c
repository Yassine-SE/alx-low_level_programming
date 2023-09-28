#include "main.h"

/**
 * _pow_recursion - function
 * @x: param
 * @y: param
 *
 * Return: 0 success
*/
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y <= 0)
		return (1);

	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
