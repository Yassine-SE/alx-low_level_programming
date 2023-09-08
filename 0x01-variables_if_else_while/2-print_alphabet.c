#include "stdio.h"

/**
 * main - Print Alphabet
 *
 * Description: Print alphabet in lower case with putchar only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnoqrstuvwxyz";
	
	for (i = 0; alphabet[i] != '\0'; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
