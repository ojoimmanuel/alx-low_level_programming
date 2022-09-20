#include "main.h"

/**
 * swap_int - swaps values
 * @a: pointer variable
 * @b: pointer variable
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
