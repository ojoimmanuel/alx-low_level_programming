#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a grid
 * @grid: grid given
 * @height: rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
