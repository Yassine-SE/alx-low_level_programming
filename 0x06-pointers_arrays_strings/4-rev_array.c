#include "main.h"

/**
 * reverse_array - function
 * @a: param
 * @n: param
 *
 * Return: 0 success
*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp = 0;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
