#include "main.h"

/**
 * main - printing putchar
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	i = 0;
	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
