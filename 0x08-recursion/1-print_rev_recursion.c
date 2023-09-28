#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: param
 *
 * Return: 0 success
*/
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
