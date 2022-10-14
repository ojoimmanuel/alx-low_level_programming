#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function to search for an int
 * @array: integer array
 * @size: array size
 * @cmp: function pointer
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, func_return_val;

	if (arrray == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		func_return_val = cmp(array[i]);
		if (func_return_val == 1)
			return (i);
	}
	return (-1);
}
