#include "main.h"

/**
 * reverse_array - reverse array
 * @a: pointer
 * @b: secod pointer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, mid, part1, part2;
	int mid = n / 2;

	n = n - 1;

	for (i = 0; i < mid; i++)
	{
		part1 = a[n - i];
		part2 = a[i];
		a[i] = part1;
		a[n - i] = part2;
	}
}
