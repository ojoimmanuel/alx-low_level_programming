#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: array pointer
 * @size: matrix size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int fwdsum = 0;
	int bwdsum = 0;

	for (i = 0; i < size; i++)
	{
		fwdsum += *(a + i * sizeof(int));
	}

	for (j = 0; j < size; j++)
	{
		bwdsum += *(a + (size * j) + (size -j - 1));
	}

	printf("%d, %d\n", fwdsum, bwdsum);
}
