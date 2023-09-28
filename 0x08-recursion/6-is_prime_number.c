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
	if (n < x * x)
		return (-1);
	else if (x * x == n)
		return (0);
	else
		return (square_root(n, x + 1));
}

/**
 * is_prime_number - function
 * @n: param
 *
 * Return: 0 success
*/
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n % 2 == 0 || square_root(n, 1) == 0)
		return (0);
	else
		return (1);
}
