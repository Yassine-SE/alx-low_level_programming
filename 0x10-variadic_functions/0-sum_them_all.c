#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 * @n: param
 * @...: Param
 *
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list parm;

	if (n == 0)
		return (0);

	va_start(parm, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(parm, int);
	}
	va_end(parm);
	return (sum);
}
