#include "main.h"

/**
 * string_len - function
 * @s: param
 *
 * Return: 0 success
*/
int string_len(char *s)
{
	int len = 0;

	if (!*s)
		return (0);

	len = 1 + string_len(s + 1);
	return (len);
}

/**
 * _palindrome - function
 * @s: param
 * @len: param
 * @x: param
 *
 * Return: 0 success
*/
int _palindrome(char *s, int len, int x)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	else if (len <= x)
		return (1);
	return (_palindrome(s, len - 1, x + 1));
}

/**
 * is_palindrome - function
 * @s: param
 *
 * Return: 0 success
*/
int is_palindrome(char *s)
{
	int len = string_len(s);
	return (_palindrome(s, len, 0));
}
