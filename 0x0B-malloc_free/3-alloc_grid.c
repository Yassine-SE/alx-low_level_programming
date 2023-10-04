#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - function
 * @with: param
 * @height: param
 *
 * Return: 0 success
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **dim;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim = malloc(sizeof(int) * height);
	if (!dim)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dim[i] = malloc(sizeof(int) * width);
		if (!dim[i])
		{
			for (; i >= 0; i--)
				free(dim[i]);
			free(dim);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			dim[i][j] = 0;
		}
	}
	return (dim);
}
