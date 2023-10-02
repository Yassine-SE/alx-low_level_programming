#include "main.h"

/**
 * _isalpha - check if alphabet
 * @c: return 1 if alphabet
 *
 * Return: 0 success
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
