#include "main.h"
#include "stdlib.h"

/**
 * array_range - function
 * @min: param
 * @max: param
 *
 * Return: 0 success
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0, range = 0;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);

	j = min;
	for (i = 0; i < range; i++)
	{
		arr[i] = j;
		j++;
	}

	return (arr);
}
