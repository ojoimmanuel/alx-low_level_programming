#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a grid
 * @width: columns
 * @height: rows
 *
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
