#include "main.h"
#include "stdlib.h"

/**
 * free_grid - function
 * @grid: param
 * @height: param
 *
 * Return: 0 success
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
