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
	int i;
	int tmp = 0;
	int fwdsum = 0;
	int bwdsum = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == 0)
		{
			bwdsum = bwdsum + *(a + 1);
			tmp = i;
		}
		else if (i == (tmp + size + 1))
		{
			bwdsum = bwdsum + *(a + i);
			tmp = i;
		}
	}

	for (i = 0; i < size; i++)
	{
		fwdsum = fwdsum + *(a + (size * (i + 1) - (i + 1)));
	}

	printf("%d, %d\n", fwdsum, bwdsum);
}
