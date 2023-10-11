#include "function_pointers.h"

/**
 * int_index - function
 * @array: param
 * @size: param
 * @cmp: function to pointer param
 *
 * Return: 0 success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (array[i]);
	}
	return (-1);
}
