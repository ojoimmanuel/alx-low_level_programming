#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of n elements 
 * @a: integer array
 * @n: number of elements to print
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0, count = 1;

	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && count < n)
		{
			printf("%d, ", a[i]);
			i++;
			count++;
		}
		printf("%d\n", a[i]);
	}
}
