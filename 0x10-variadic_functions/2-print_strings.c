#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function
 * @separator: param
 * @n: param
 * @...: Param
 *
 * Return: 0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parm;
	char *name;

	va_start(parm, n);
	for (i = 0; i < n; i++)
	{
		name = va_arg(parm, char*);
		if (!name)
			printf("(nil)");
		else
			printf("%s", name);

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(parm);
}
