#include "main.h"

/**
 * square_root - function
 * @n: param
 * @x: param
 *
 * Return: 0 success
*/
int square_root(int n, int x)
{
	if ((x * x) < n)
		return (square_root(n, x + 1));
	else if (n == (x * x))
		return (x);
	else
		return (-1);
}

/**
 * _sqrt_recursion - function
 * @n: param
 *
 * Return: 0 success
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 1));
}
