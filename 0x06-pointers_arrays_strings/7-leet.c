#include "main.h"

/**
 * leet - function
 * @s: param
 *
 * Return: 0 success
*/
char *leet(char *s)
{
	int i, j;
	char num[] = {'4', '3', '0', '7', '1'};
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	int letter_len;

	letter_len = sizeof(letter) / sizeof(char);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < letter_len; j++)
		{
			if (s[i] == letter[j] || s[i] == (letter[j] - 32))
				s[i] = num[j];
		}
		j = 0;
	}
	return (s);
}
