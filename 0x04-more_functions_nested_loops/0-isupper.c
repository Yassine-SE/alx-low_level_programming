#include "main.h"

/**
 * _isupper - is upper
 * @c: param
 *
 * Return: 0 success
*/
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}