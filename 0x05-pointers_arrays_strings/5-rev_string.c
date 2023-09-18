#include "main.h"

/**
 * rev_string - check the code
 * @s: param
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0; i  < count / 2; i++)
	{
		char c;

		c = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = c;
	}
}
