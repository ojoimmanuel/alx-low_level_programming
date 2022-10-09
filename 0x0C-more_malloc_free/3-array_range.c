#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of int
 * @min: min int
 * @max: max int
 *
 * Return: pointer to allocated mmry
 */

int *array_range(int min, int max)
{
	int *p;
	int diff;
	int num;
	int i;

	if (min > max)
		return (NULL);

	diff = max - min + 1;
	p = malloc(diff * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (num = min, i = 0; num <= max && i < diff; num++, i++)
		p[i] = num;

	return (p);
}
