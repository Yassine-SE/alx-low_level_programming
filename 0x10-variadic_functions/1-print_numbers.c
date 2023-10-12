#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function
 * @separator: param
 * @n: param
 * @...: Param
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parm;

	va_start(parm, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parm, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(parm);
}
