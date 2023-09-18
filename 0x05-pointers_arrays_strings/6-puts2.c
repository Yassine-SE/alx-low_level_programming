#include "main.h"

/**
 * puts2 - check the code
 * @str: param
 * 
 * Return: 0 sucess
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');
}
