#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a: pointer
 * @b: secod pointer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, mid, part1, part2, len;

	if (n % 2 != 0)
		len = n + 1;
	else
		len = n;
	mid = len / 2;
	for (i = 0; i < mid; i++)
	{
		part1 = a[n - i];
		part2 = a[i];
		a[i] = part1;
		a[n - i] = part2;
	}
}
