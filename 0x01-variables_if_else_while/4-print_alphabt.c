#include "stdio.h"

/**
 * main - Print alphabt
 *
 * Description: Print alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; alphabet[i] != '\0'; i++)
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
