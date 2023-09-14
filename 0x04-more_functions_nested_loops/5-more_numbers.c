#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (j = '0'; j <= '9'; j++)
	{
		_putchar(j);
		if (j == '9')
		{
			for (i = '0'; i <= '4'; i++)
			{
				_putchar('1');
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
