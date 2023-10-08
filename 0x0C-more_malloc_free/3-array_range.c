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
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}
