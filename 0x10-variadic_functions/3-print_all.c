#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function
 * @format: param
 * @...: Param
 *
 * Return: 0 success
 */
void print_all(const char * const format, ...)
{
	int i;
	char *string;
	char *separator;
	va_list param;

	va_start(param, format);
	
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(param, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(param, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(param, double));
					break;
				case 's':
					string = va_arg(param, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(param);
}
