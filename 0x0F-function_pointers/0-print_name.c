#include "function_pointers.h"

/**
 * print_name - function
 * @name: param
 * @f: function to pointer param
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
