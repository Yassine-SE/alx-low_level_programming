#include "stdio.h"

/**
 * main - Print comb 4
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					if (k < m)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(m);
						if (i == '9' && j == '9' && k == '8' && m == '9')
						{
							/* Do Nothing */
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
