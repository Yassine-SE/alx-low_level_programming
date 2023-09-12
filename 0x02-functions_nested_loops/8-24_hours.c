#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0 success
 */
void jack_bauer(void)
{
	int hh, h, ss, s;

	hh = '0';
	while (hh <= '2')
	{
		h = '0';
		while (h <= '9')
		{
			ss = '0';
			while (ss <= '5')
			{
				s = '0';
				while (s <= '9')
				{
					_putchar(hh);
					_putchar(h);
					_putchar(':');
					_putchar(ss);
					_putchar(s);
					_putchar('\n');
					if ((hh == '2' && h == '3') && (ss == '5' && s == '9'))
					{
						return;
					}
					s++;
				}
				ss++;
			}
			h++;
		}
		hh++;
	}
}
